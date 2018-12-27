/* Copyright 2018 New Vector Ltd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef OLM_SAS_H_
#define OLM_SAS_H_

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OlmSAS OlmSAS;

const char * olm_sas_last_error(
    OlmSAS * sas
);

size_t olm_sas_size(void);

OlmSAS * olm_sas(
    void * memory
);

size_t olm_clear_sas(
    OlmSAS * sas
);

size_t olm_create_sas_random_length(
    OlmSAS * sas
);

size_t olm_create_sas(
    OlmSAS * sas,
    void * random, size_t random_length
);

size_t olm_sas_pubkey_length(OlmSAS * sas);

size_t olm_sas_get_pubkey(
    OlmSAS * sas,
    void * pubkey, size_t pubkey_length
);

size_t olm_sas_set_their_key(
    OlmSAS *sas,
    void * their_key, size_t their_key_length
);

size_t olm_sas_generate_bytes(
    OlmSAS * sas,
    void * output, size_t output_length
);

size_t olm_sas_mac_length(
    OlmSAS *sas
);

size_t olm_sas_calculate_mac(
    OlmSAS * sas,
    void * input, size_t input_length,
    void * mac, size_t mac_length
);

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* OLM_SAS_H_ */
