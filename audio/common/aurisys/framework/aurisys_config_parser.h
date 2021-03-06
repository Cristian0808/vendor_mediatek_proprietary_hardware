#ifndef MTK_AURISYS_CONFIG_PARSER_H
#define MTK_AURISYS_CONFIG_PARSER_H


#ifdef __cplusplus
extern "C" {
#endif


/*
 * =============================================================================
 *                     ref struct
 * =============================================================================
 */

struct aurisys_config_t;


/*
 * =============================================================================
 *                     MACRO
 * =============================================================================
 */


/*
 * =============================================================================
 *                     typedef
 * =============================================================================
 */


/*
 * =============================================================================
 *                     struct definition
 * =============================================================================
 */


/*
 * =============================================================================
 *                     hook function
 * =============================================================================
 */


/*
 * =============================================================================
 *                     public function
 * =============================================================================
 */

struct aurisys_config_t *parse_aurisys_config(void);
void delete_aurisys_config(struct aurisys_config_t *aurisys_config);



#ifdef __cplusplus
}  /* extern "C" */
#endif

#endif /* end of MTK_AURISYS_CONFIG_PARSER_H */

