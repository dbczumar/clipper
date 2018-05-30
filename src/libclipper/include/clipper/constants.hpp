#ifndef CLIPPER_LIB_CONSTANTS_HPP
#define CLIPPER_LIB_CONSTANTS_HPP

#include <string>
#include <utility>

namespace clipper {

enum RedisDBTable {
  REDIS_STATE_DB_NUM = 1,
  REDIS_MODEL_DB_NUM = 2,
  REDIS_CONTAINER_DB_NUM = 3,
  REDIS_RESOURCE_DB_NUM = 4,
  REDIS_ENDPOINT_DB_NUM = 5,
  REDIS_ENDPOINT_MODULES_LINKS_DB_NUM = 6,
  REDIS_METADATA_DB_NUM = 7,  // used to store Clipper configuration metadata (ex: model version metadata)
  REDIS_APPLICATION_DB_NUM = 8, // UNUSED - KEEPING (TEMPORARILY?) FOR COMPATIBILITY
  REDIS_APP_MODEL_LINKS_DB_NUM = 9 // UNUSED - KEEPING (TEMPORARILY?) FOR COMPATIBILITY
};

constexpr int RPC_SERVICE_PORT = 7000;

constexpr int QUERY_FRONTEND_PORT = 1337;
constexpr int MANAGEMENT_FRONTEND_PORT = 1338;

const std::string ITEM_DELIMITER = ",";

// used to concatenate multiple parts of an item, such as the
// name and version of a VersionedModelID
const std::string ITEM_PART_CONCATENATOR = ":";

const std::string LOGGING_TAG_CLIPPER = "Clipper";

constexpr int DEFAULT_USER_ID = 0;

const std::string REDIS_KEY_ENDPOINT_NAME = "endpoint_name";
const std::string REDIS_KEY_ENDPOINT_MODEL_CONFIGS = "model_configs";
const std::string REDIS_KEY_ENDPOINT_INPUT_TYPE = "input_type";
const std::string REDIS_KEY_ENDPOINT_LATENCY_SLO = "latency_slo";

const std::string MODEL_CONFIG_KEY_MODEL_NAME = "model_name";
const std::string MODEL_CONFIG_KEY_MODEL_VERSION = "model_version";
const std::string MODEL_CONFIG_KEY_CONFIG_NAME = "config_name";
const std::string MODEL_CONFIG_KEY_COMPUTE_INSTANCE_TYPE = "instance_type";
const std::string MODEL_CONFIG_KEY_COMPUTE_INSTANCE_COUNT = "instance_count";
const std::string MODEL_CONFIG_KEY_COMPUTE_AUTOSCALING_POLICY = "autoscaling_policy";

const std::vector<std::string> SORTED_MODEL_CONFIG_KEYS{
  MODEL_CONFIG_KEY_MODEL_NAME,
  MODEL_CONFIG_KEY_MODEL_VERSION,
  MODEL_CONFIG_KEY_CONFIG_NAME,
  MODEL_CONFIG_KEY_COMPUTE_INSTANCE_TYPE,
  MODEL_CONFIG_KEY_COMPUTE_INSTANCE_COUNT,
  MODEL_CONFIG_KEY_COMPUTE_AUTOSCALING_POLICY
}

}  // namespace clipper
#endif
