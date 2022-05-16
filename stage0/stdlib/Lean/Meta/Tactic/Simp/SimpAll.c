// Lean compiler output
// Module: Lean.Meta.Tactic.Simp.SimpAll
// Imports: Init Lean.Meta.Tactic.Clear Lean.Meta.Tactic.Util Lean.Meta.Tactic.Simp.Main
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpTarget(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___closed__1;
static lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___closed__3;
static lean_object* l_Lean_Meta_SimpAll_instInhabitedEntry___closed__2;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static uint64_t l_Lean_Meta_SimpAll_instInhabitedEntry___closed__1;
uint8_t lean_usize_dec_lt(size_t, size_t);
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_SimpAll_State_entries___default___closed__1;
lean_object* l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_getSimpTheorems___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SimpAll_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__2___closed__1;
lean_object* l_Lean_Meta_getNondepPropHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
static lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___closed__1;
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Meta_assertHypotheses(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withMVarContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
static lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_getSimpTheorems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_SimpAll_State_modified___default;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpTheoremsArray_eraseTheorem(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SimpAll_instInhabitedEntry;
lean_object* l_Lean_Meta_tryClearMany(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__2(size_t, size_t, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_simpAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_SimpAll_instInhabitedEntry___closed__3;
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SimpAll_State_entries___default;
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedTypeHint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpTheoremsArray_addTheorem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__1(size_t, size_t, lean_object*);
uint8_t l_Lean_Meta_SimpTheoremsArray_isErased(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpAll___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static uint64_t _init_l_Lean_Meta_SimpAll_instInhabitedEntry___closed__1() {
_start:
{
lean_object* x_1; uint64_t x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_uint64_of_nat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_SimpAll_instInhabitedEntry___closed__2() {
_start:
{
lean_object* x_1; uint64_t x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Meta_SimpAll_instInhabitedEntry___closed__1;
x_3 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint64(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_SimpAll_instInhabitedEntry___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_SimpAll_instInhabitedEntry___closed__2;
x_3 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 2, x_1);
lean_ctor_set(x_3, 3, x_2);
lean_ctor_set(x_3, 4, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_SimpAll_instInhabitedEntry() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_SimpAll_instInhabitedEntry___closed__3;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_SimpAll_State_modified___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_SimpAll_State_entries___default___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_SimpAll_State_entries___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_SimpAll_State_entries___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("h");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = lean_usize_dec_lt(x_3, x_2);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_4);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_21; 
x_13 = lean_array_uget(x_1, x_3);
lean_inc(x_6);
x_21 = l_Lean_Meta_getLocalDecl(x_13, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_LocalDecl_userName(x_22);
lean_inc(x_24);
lean_inc(x_4);
x_25 = l_Lean_Meta_SimpTheoremsArray_isErased(x_4, x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_26 = l_Lean_LocalDecl_fvarId(x_22);
x_27 = l_Lean_LocalDecl_toExpr(x_22);
x_28 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1___closed__2;
x_29 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_28, x_8, x_9, x_23);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
lean_inc(x_30);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_30);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_27);
x_33 = l_Lean_Meta_SimpTheoremsArray_addTheorem(x_4, x_27, x_32, x_6, x_7, x_8, x_9, x_31);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_LocalDecl_type(x_22);
lean_dec(x_22);
lean_inc(x_7);
x_37 = l_Lean_Meta_instantiateMVars(x_36, x_6, x_7, x_8, x_9, x_35);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_40, 0, x_26);
lean_ctor_set(x_40, 1, x_24);
lean_ctor_set(x_40, 2, x_30);
lean_ctor_set(x_40, 3, x_38);
lean_ctor_set(x_40, 4, x_27);
x_41 = lean_st_ref_get(x_9, x_39);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_st_ref_take(x_5, x_42);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = !lean_is_exclusive(x_44);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_47 = lean_ctor_get(x_44, 1);
x_48 = lean_ctor_get(x_44, 2);
x_49 = lean_array_push(x_47, x_40);
x_50 = !lean_is_exclusive(x_48);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_48, 1);
lean_dec(x_51);
lean_inc(x_34);
lean_ctor_set(x_48, 1, x_34);
lean_ctor_set(x_44, 1, x_49);
x_52 = lean_st_ref_set(x_5, x_44, x_45);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_34);
x_14 = x_54;
x_15 = x_53;
goto block_20;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_55 = lean_ctor_get(x_48, 0);
x_56 = lean_ctor_get(x_48, 2);
x_57 = lean_ctor_get(x_48, 3);
x_58 = lean_ctor_get(x_48, 4);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_48);
lean_inc(x_34);
x_59 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_59, 0, x_55);
lean_ctor_set(x_59, 1, x_34);
lean_ctor_set(x_59, 2, x_56);
lean_ctor_set(x_59, 3, x_57);
lean_ctor_set(x_59, 4, x_58);
lean_ctor_set(x_44, 2, x_59);
lean_ctor_set(x_44, 1, x_49);
x_60 = lean_st_ref_set(x_5, x_44, x_45);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_62 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_62, 0, x_34);
x_14 = x_62;
x_15 = x_61;
goto block_20;
}
}
else
{
uint8_t x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_63 = lean_ctor_get_uint8(x_44, sizeof(void*)*3);
x_64 = lean_ctor_get(x_44, 0);
x_65 = lean_ctor_get(x_44, 1);
x_66 = lean_ctor_get(x_44, 2);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_44);
x_67 = lean_array_push(x_65, x_40);
x_68 = lean_ctor_get(x_66, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_66, 2);
lean_inc(x_69);
x_70 = lean_ctor_get(x_66, 3);
lean_inc(x_70);
x_71 = lean_ctor_get(x_66, 4);
lean_inc(x_71);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 lean_ctor_release(x_66, 2);
 lean_ctor_release(x_66, 3);
 lean_ctor_release(x_66, 4);
 x_72 = x_66;
} else {
 lean_dec_ref(x_66);
 x_72 = lean_box(0);
}
lean_inc(x_34);
if (lean_is_scalar(x_72)) {
 x_73 = lean_alloc_ctor(0, 5, 0);
} else {
 x_73 = x_72;
}
lean_ctor_set(x_73, 0, x_68);
lean_ctor_set(x_73, 1, x_34);
lean_ctor_set(x_73, 2, x_69);
lean_ctor_set(x_73, 3, x_70);
lean_ctor_set(x_73, 4, x_71);
x_74 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_74, 0, x_64);
lean_ctor_set(x_74, 1, x_67);
lean_ctor_set(x_74, 2, x_73);
lean_ctor_set_uint8(x_74, sizeof(void*)*3, x_63);
x_75 = lean_st_ref_set(x_5, x_74, x_45);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_77 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_77, 0, x_34);
x_14 = x_77;
x_15 = x_76;
goto block_20;
}
}
else
{
uint8_t x_78; 
lean_dec(x_30);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_78 = !lean_is_exclusive(x_33);
if (x_78 == 0)
{
return x_33;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_33, 0);
x_80 = lean_ctor_get(x_33, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_33);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
else
{
lean_object* x_82; 
lean_dec(x_24);
lean_dec(x_22);
x_82 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_82, 0, x_4);
x_14 = x_82;
x_15 = x_23;
goto block_20;
}
}
else
{
uint8_t x_83; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_83 = !lean_is_exclusive(x_21);
if (x_83 == 0)
{
return x_21;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_21, 0);
x_85 = lean_ctor_get(x_21, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_21);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
block_20:
{
lean_object* x_16; size_t x_17; size_t x_18; 
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = 1;
x_18 = lean_usize_add(x_3, x_17);
x_3 = x_18;
x_4 = x_16;
x_10 = x_15;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_st_ref_get(x_1, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_13 = l_Lean_Meta_getNondepPropHyps(x_12, x_2, x_3, x_4, x_5, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; size_t x_24; size_t x_25; lean_object* x_26; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_st_ref_get(x_5, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_st_ref_get(x_1, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_19, 2);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_array_get_size(x_14);
x_24 = lean_usize_of_nat(x_23);
lean_dec(x_23);
x_25 = 0;
x_26 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1(x_14, x_24, x_25, x_22, x_1, x_2, x_3, x_4, x_5, x_20);
lean_dec(x_14);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
x_29 = lean_box(0);
lean_ctor_set(x_26, 0, x_29);
return x_26;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
lean_dec(x_26);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_26);
if (x_33 == 0)
{
return x_26;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_26, 0);
x_35 = lean_ctor_get(x_26, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_26);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_13);
if (x_37 == 0)
{
return x_13;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_13, 0);
x_39 = lean_ctor_get(x_13, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_13);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_12 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_13 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1(x_1, x_11, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_getSimpTheorems(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_st_ref_get(x_1, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_11, 2);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_9);
x_16 = lean_ctor_get(x_14, 2);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_15);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_getSimpTheorems___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_getSimpTheorems(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___closed__1;
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_nat_dec_le(x_4, x_3);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_eq(x_2, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
lean_dec(x_6);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_2, x_16);
lean_dec(x_2);
x_35 = lean_st_ref_get(x_11, x_12);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = lean_st_ref_get(x_7, x_36);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = l_Lean_Meta_SimpAll_instInhabitedEntry;
x_42 = lean_array_get(x_41, x_40, x_3);
lean_dec(x_40);
x_43 = lean_st_ref_get(x_11, x_39);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_45 = lean_st_ref_get(x_7, x_44);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = lean_ctor_get(x_46, 2);
lean_inc(x_48);
lean_dec(x_46);
x_49 = lean_st_ref_get(x_11, x_47);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
x_51 = lean_st_ref_get(x_7, x_50);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = lean_ctor_get(x_52, 2);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_56 = !lean_is_exclusive(x_42);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_57 = lean_ctor_get(x_42, 0);
x_58 = lean_ctor_get(x_42, 1);
x_59 = lean_ctor_get(x_42, 2);
x_60 = lean_ctor_get(x_42, 3);
x_61 = lean_ctor_get(x_42, 4);
lean_inc(x_59);
x_62 = l_Lean_Meta_SimpTheoremsArray_eraseTheorem(x_55, x_59);
x_63 = !lean_is_exclusive(x_48);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; lean_object* x_73; lean_object* x_74; 
x_64 = lean_ctor_get(x_48, 1);
lean_dec(x_64);
lean_ctor_set(x_48, 1, x_62);
x_65 = lean_st_ref_get(x_11, x_53);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
lean_dec(x_65);
x_67 = lean_st_ref_get(x_7, x_66);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = lean_ctor_get(x_68, 0);
lean_inc(x_70);
lean_dec(x_68);
x_71 = lean_box(0);
x_72 = 1;
x_73 = l_Lean_Meta_SimpAll_State_entries___default___closed__1;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_60);
x_74 = l_Lean_Meta_simpStep(x_70, x_61, x_60, x_48, x_71, x_72, x_73, x_73, x_8, x_9, x_10, x_11, x_69);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; 
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
if (lean_obj_tag(x_75) == 0)
{
uint8_t x_76; 
lean_free_object(x_42);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
x_76 = !lean_is_exclusive(x_74);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_ctor_get(x_74, 0);
lean_dec(x_77);
x_78 = l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___closed__3;
lean_ctor_set(x_74, 0, x_78);
x_18 = x_74;
goto block_34;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_74, 1);
lean_inc(x_79);
lean_dec(x_74);
x_80 = l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___closed__3;
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
x_18 = x_81;
goto block_34;
}
}
else
{
uint8_t x_82; 
x_82 = !lean_is_exclusive(x_75);
if (x_82 == 0)
{
uint8_t x_83; 
x_83 = !lean_is_exclusive(x_74);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_84 = lean_ctor_get(x_75, 0);
x_85 = lean_ctor_get(x_74, 1);
x_86 = lean_ctor_get(x_74, 0);
lean_dec(x_86);
x_87 = lean_ctor_get(x_84, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_84, 1);
lean_inc(x_88);
lean_dec(x_84);
x_89 = lean_expr_eqv(x_88, x_60);
lean_dec(x_60);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_free_object(x_74);
x_90 = lean_st_ref_get(x_11, x_85);
x_91 = lean_ctor_get(x_90, 1);
lean_inc(x_91);
lean_dec(x_90);
x_92 = lean_st_ref_get(x_7, x_91);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
x_95 = lean_ctor_get(x_93, 2);
lean_inc(x_95);
lean_dec(x_93);
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
lean_dec(x_95);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_88);
lean_inc(x_87);
x_97 = l_Lean_Meta_mkExpectedTypeHint(x_87, x_88, x_8, x_9, x_10, x_11, x_94);
if (lean_obj_tag(x_97) == 0)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_97, 1);
lean_inc(x_99);
lean_dec(x_97);
lean_inc(x_59);
lean_ctor_set(x_75, 0, x_59);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_100 = l_Lean_Meta_SimpTheoremsArray_addTheorem(x_96, x_98, x_75, x_8, x_9, x_10, x_11, x_99);
if (lean_obj_tag(x_100) == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; uint8_t x_108; 
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
x_103 = lean_st_ref_get(x_11, x_102);
x_104 = lean_ctor_get(x_103, 1);
lean_inc(x_104);
lean_dec(x_103);
x_105 = lean_st_ref_take(x_7, x_104);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
lean_dec(x_105);
x_108 = !lean_is_exclusive(x_106);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; uint8_t x_113; 
x_109 = lean_ctor_get(x_106, 1);
x_110 = lean_ctor_get(x_106, 2);
x_111 = lean_array_get_size(x_109);
x_112 = lean_nat_dec_lt(x_3, x_111);
lean_dec(x_111);
x_113 = !lean_is_exclusive(x_110);
if (x_113 == 0)
{
lean_object* x_114; 
x_114 = lean_ctor_get(x_110, 1);
lean_dec(x_114);
lean_ctor_set(x_110, 1, x_101);
if (x_112 == 0)
{
lean_object* x_115; uint8_t x_116; 
lean_dec(x_88);
lean_dec(x_87);
lean_free_object(x_42);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_ctor_set_uint8(x_106, sizeof(void*)*3, x_72);
x_115 = lean_st_ref_set(x_7, x_106, x_107);
x_116 = !lean_is_exclusive(x_115);
if (x_116 == 0)
{
lean_object* x_117; lean_object* x_118; 
x_117 = lean_ctor_get(x_115, 0);
lean_dec(x_117);
lean_inc(x_1);
x_118 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_118, 0, x_1);
lean_ctor_set(x_115, 0, x_118);
x_18 = x_115;
goto block_34;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_115, 1);
lean_inc(x_119);
lean_dec(x_115);
lean_inc(x_1);
x_120 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_120, 0, x_1);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_119);
x_18 = x_121;
goto block_34;
}
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; 
x_122 = lean_box(0);
x_123 = lean_array_fset(x_109, x_3, x_122);
lean_ctor_set(x_42, 4, x_87);
lean_ctor_set(x_42, 3, x_88);
x_124 = lean_array_fset(x_123, x_3, x_42);
lean_ctor_set(x_106, 1, x_124);
lean_ctor_set_uint8(x_106, sizeof(void*)*3, x_72);
x_125 = lean_st_ref_set(x_7, x_106, x_107);
x_126 = !lean_is_exclusive(x_125);
if (x_126 == 0)
{
lean_object* x_127; lean_object* x_128; 
x_127 = lean_ctor_get(x_125, 0);
lean_dec(x_127);
lean_inc(x_1);
x_128 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_128, 0, x_1);
lean_ctor_set(x_125, 0, x_128);
x_18 = x_125;
goto block_34;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_125, 1);
lean_inc(x_129);
lean_dec(x_125);
lean_inc(x_1);
x_130 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_130, 0, x_1);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_129);
x_18 = x_131;
goto block_34;
}
}
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_132 = lean_ctor_get(x_110, 0);
x_133 = lean_ctor_get(x_110, 2);
x_134 = lean_ctor_get(x_110, 3);
x_135 = lean_ctor_get(x_110, 4);
lean_inc(x_135);
lean_inc(x_134);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_110);
x_136 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_136, 0, x_132);
lean_ctor_set(x_136, 1, x_101);
lean_ctor_set(x_136, 2, x_133);
lean_ctor_set(x_136, 3, x_134);
lean_ctor_set(x_136, 4, x_135);
if (x_112 == 0)
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_88);
lean_dec(x_87);
lean_free_object(x_42);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_ctor_set(x_106, 2, x_136);
lean_ctor_set_uint8(x_106, sizeof(void*)*3, x_72);
x_137 = lean_st_ref_set(x_7, x_106, x_107);
x_138 = lean_ctor_get(x_137, 1);
lean_inc(x_138);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 x_139 = x_137;
} else {
 lean_dec_ref(x_137);
 x_139 = lean_box(0);
}
lean_inc(x_1);
x_140 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_140, 0, x_1);
if (lean_is_scalar(x_139)) {
 x_141 = lean_alloc_ctor(0, 2, 0);
} else {
 x_141 = x_139;
}
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_138);
x_18 = x_141;
goto block_34;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_142 = lean_box(0);
x_143 = lean_array_fset(x_109, x_3, x_142);
lean_ctor_set(x_42, 4, x_87);
lean_ctor_set(x_42, 3, x_88);
x_144 = lean_array_fset(x_143, x_3, x_42);
lean_ctor_set(x_106, 2, x_136);
lean_ctor_set(x_106, 1, x_144);
lean_ctor_set_uint8(x_106, sizeof(void*)*3, x_72);
x_145 = lean_st_ref_set(x_7, x_106, x_107);
x_146 = lean_ctor_get(x_145, 1);
lean_inc(x_146);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_147 = x_145;
} else {
 lean_dec_ref(x_145);
 x_147 = lean_box(0);
}
lean_inc(x_1);
x_148 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_148, 0, x_1);
if (lean_is_scalar(x_147)) {
 x_149 = lean_alloc_ctor(0, 2, 0);
} else {
 x_149 = x_147;
}
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_146);
x_18 = x_149;
goto block_34;
}
}
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; uint8_t x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_150 = lean_ctor_get(x_106, 0);
x_151 = lean_ctor_get(x_106, 1);
x_152 = lean_ctor_get(x_106, 2);
lean_inc(x_152);
lean_inc(x_151);
lean_inc(x_150);
lean_dec(x_106);
x_153 = lean_array_get_size(x_151);
x_154 = lean_nat_dec_lt(x_3, x_153);
lean_dec(x_153);
x_155 = lean_ctor_get(x_152, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_152, 2);
lean_inc(x_156);
x_157 = lean_ctor_get(x_152, 3);
lean_inc(x_157);
x_158 = lean_ctor_get(x_152, 4);
lean_inc(x_158);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 lean_ctor_release(x_152, 2);
 lean_ctor_release(x_152, 3);
 lean_ctor_release(x_152, 4);
 x_159 = x_152;
} else {
 lean_dec_ref(x_152);
 x_159 = lean_box(0);
}
if (lean_is_scalar(x_159)) {
 x_160 = lean_alloc_ctor(0, 5, 0);
} else {
 x_160 = x_159;
}
lean_ctor_set(x_160, 0, x_155);
lean_ctor_set(x_160, 1, x_101);
lean_ctor_set(x_160, 2, x_156);
lean_ctor_set(x_160, 3, x_157);
lean_ctor_set(x_160, 4, x_158);
if (x_154 == 0)
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
lean_dec(x_88);
lean_dec(x_87);
lean_free_object(x_42);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
x_161 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_161, 0, x_150);
lean_ctor_set(x_161, 1, x_151);
lean_ctor_set(x_161, 2, x_160);
lean_ctor_set_uint8(x_161, sizeof(void*)*3, x_72);
x_162 = lean_st_ref_set(x_7, x_161, x_107);
x_163 = lean_ctor_get(x_162, 1);
lean_inc(x_163);
if (lean_is_exclusive(x_162)) {
 lean_ctor_release(x_162, 0);
 lean_ctor_release(x_162, 1);
 x_164 = x_162;
} else {
 lean_dec_ref(x_162);
 x_164 = lean_box(0);
}
lean_inc(x_1);
x_165 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_165, 0, x_1);
if (lean_is_scalar(x_164)) {
 x_166 = lean_alloc_ctor(0, 2, 0);
} else {
 x_166 = x_164;
}
lean_ctor_set(x_166, 0, x_165);
lean_ctor_set(x_166, 1, x_163);
x_18 = x_166;
goto block_34;
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_167 = lean_box(0);
x_168 = lean_array_fset(x_151, x_3, x_167);
lean_ctor_set(x_42, 4, x_87);
lean_ctor_set(x_42, 3, x_88);
x_169 = lean_array_fset(x_168, x_3, x_42);
x_170 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_170, 0, x_150);
lean_ctor_set(x_170, 1, x_169);
lean_ctor_set(x_170, 2, x_160);
lean_ctor_set_uint8(x_170, sizeof(void*)*3, x_72);
x_171 = lean_st_ref_set(x_7, x_170, x_107);
x_172 = lean_ctor_get(x_171, 1);
lean_inc(x_172);
if (lean_is_exclusive(x_171)) {
 lean_ctor_release(x_171, 0);
 lean_ctor_release(x_171, 1);
 x_173 = x_171;
} else {
 lean_dec_ref(x_171);
 x_173 = lean_box(0);
}
lean_inc(x_1);
x_174 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_174, 0, x_1);
if (lean_is_scalar(x_173)) {
 x_175 = lean_alloc_ctor(0, 2, 0);
} else {
 x_175 = x_173;
}
lean_ctor_set(x_175, 0, x_174);
lean_ctor_set(x_175, 1, x_172);
x_18 = x_175;
goto block_34;
}
}
}
else
{
uint8_t x_176; 
lean_dec(x_88);
lean_dec(x_87);
lean_free_object(x_42);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
x_176 = !lean_is_exclusive(x_100);
if (x_176 == 0)
{
x_18 = x_100;
goto block_34;
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_177 = lean_ctor_get(x_100, 0);
x_178 = lean_ctor_get(x_100, 1);
lean_inc(x_178);
lean_inc(x_177);
lean_dec(x_100);
x_179 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_179, 0, x_177);
lean_ctor_set(x_179, 1, x_178);
x_18 = x_179;
goto block_34;
}
}
}
else
{
uint8_t x_180; 
lean_dec(x_96);
lean_dec(x_88);
lean_dec(x_87);
lean_free_object(x_75);
lean_free_object(x_42);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
x_180 = !lean_is_exclusive(x_97);
if (x_180 == 0)
{
x_18 = x_97;
goto block_34;
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_181 = lean_ctor_get(x_97, 0);
x_182 = lean_ctor_get(x_97, 1);
lean_inc(x_182);
lean_inc(x_181);
lean_dec(x_97);
x_183 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_183, 0, x_181);
lean_ctor_set(x_183, 1, x_182);
x_18 = x_183;
goto block_34;
}
}
}
else
{
lean_object* x_184; 
lean_dec(x_88);
lean_dec(x_87);
lean_free_object(x_75);
lean_free_object(x_42);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_inc(x_1);
x_184 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_184, 0, x_1);
lean_ctor_set(x_74, 0, x_184);
x_18 = x_74;
goto block_34;
}
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; uint8_t x_189; 
x_185 = lean_ctor_get(x_75, 0);
x_186 = lean_ctor_get(x_74, 1);
lean_inc(x_186);
lean_dec(x_74);
x_187 = lean_ctor_get(x_185, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_185, 1);
lean_inc(x_188);
lean_dec(x_185);
x_189 = lean_expr_eqv(x_188, x_60);
lean_dec(x_60);
if (x_189 == 0)
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_190 = lean_st_ref_get(x_11, x_186);
x_191 = lean_ctor_get(x_190, 1);
lean_inc(x_191);
lean_dec(x_190);
x_192 = lean_st_ref_get(x_7, x_191);
x_193 = lean_ctor_get(x_192, 0);
lean_inc(x_193);
x_194 = lean_ctor_get(x_192, 1);
lean_inc(x_194);
lean_dec(x_192);
x_195 = lean_ctor_get(x_193, 2);
lean_inc(x_195);
lean_dec(x_193);
x_196 = lean_ctor_get(x_195, 1);
lean_inc(x_196);
lean_dec(x_195);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_188);
lean_inc(x_187);
x_197 = l_Lean_Meta_mkExpectedTypeHint(x_187, x_188, x_8, x_9, x_10, x_11, x_194);
if (lean_obj_tag(x_197) == 0)
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; 
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
lean_dec(x_197);
lean_inc(x_59);
lean_ctor_set(x_75, 0, x_59);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_200 = l_Lean_Meta_SimpTheoremsArray_addTheorem(x_196, x_198, x_75, x_8, x_9, x_10, x_11, x_199);
if (lean_obj_tag(x_200) == 0)
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; uint8_t x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_201 = lean_ctor_get(x_200, 0);
lean_inc(x_201);
x_202 = lean_ctor_get(x_200, 1);
lean_inc(x_202);
lean_dec(x_200);
x_203 = lean_st_ref_get(x_11, x_202);
x_204 = lean_ctor_get(x_203, 1);
lean_inc(x_204);
lean_dec(x_203);
x_205 = lean_st_ref_take(x_7, x_204);
x_206 = lean_ctor_get(x_205, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_205, 1);
lean_inc(x_207);
lean_dec(x_205);
x_208 = lean_ctor_get(x_206, 0);
lean_inc(x_208);
x_209 = lean_ctor_get(x_206, 1);
lean_inc(x_209);
x_210 = lean_ctor_get(x_206, 2);
lean_inc(x_210);
if (lean_is_exclusive(x_206)) {
 lean_ctor_release(x_206, 0);
 lean_ctor_release(x_206, 1);
 lean_ctor_release(x_206, 2);
 x_211 = x_206;
} else {
 lean_dec_ref(x_206);
 x_211 = lean_box(0);
}
x_212 = lean_array_get_size(x_209);
x_213 = lean_nat_dec_lt(x_3, x_212);
lean_dec(x_212);
x_214 = lean_ctor_get(x_210, 0);
lean_inc(x_214);
x_215 = lean_ctor_get(x_210, 2);
lean_inc(x_215);
x_216 = lean_ctor_get(x_210, 3);
lean_inc(x_216);
x_217 = lean_ctor_get(x_210, 4);
lean_inc(x_217);
if (lean_is_exclusive(x_210)) {
 lean_ctor_release(x_210, 0);
 lean_ctor_release(x_210, 1);
 lean_ctor_release(x_210, 2);
 lean_ctor_release(x_210, 3);
 lean_ctor_release(x_210, 4);
 x_218 = x_210;
} else {
 lean_dec_ref(x_210);
 x_218 = lean_box(0);
}
if (lean_is_scalar(x_218)) {
 x_219 = lean_alloc_ctor(0, 5, 0);
} else {
 x_219 = x_218;
}
lean_ctor_set(x_219, 0, x_214);
lean_ctor_set(x_219, 1, x_201);
lean_ctor_set(x_219, 2, x_215);
lean_ctor_set(x_219, 3, x_216);
lean_ctor_set(x_219, 4, x_217);
if (x_213 == 0)
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; 
lean_dec(x_188);
lean_dec(x_187);
lean_free_object(x_42);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
if (lean_is_scalar(x_211)) {
 x_220 = lean_alloc_ctor(0, 3, 1);
} else {
 x_220 = x_211;
}
lean_ctor_set(x_220, 0, x_208);
lean_ctor_set(x_220, 1, x_209);
lean_ctor_set(x_220, 2, x_219);
lean_ctor_set_uint8(x_220, sizeof(void*)*3, x_72);
x_221 = lean_st_ref_set(x_7, x_220, x_207);
x_222 = lean_ctor_get(x_221, 1);
lean_inc(x_222);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 lean_ctor_release(x_221, 1);
 x_223 = x_221;
} else {
 lean_dec_ref(x_221);
 x_223 = lean_box(0);
}
lean_inc(x_1);
x_224 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_224, 0, x_1);
if (lean_is_scalar(x_223)) {
 x_225 = lean_alloc_ctor(0, 2, 0);
} else {
 x_225 = x_223;
}
lean_ctor_set(x_225, 0, x_224);
lean_ctor_set(x_225, 1, x_222);
x_18 = x_225;
goto block_34;
}
else
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; 
x_226 = lean_box(0);
x_227 = lean_array_fset(x_209, x_3, x_226);
lean_ctor_set(x_42, 4, x_187);
lean_ctor_set(x_42, 3, x_188);
x_228 = lean_array_fset(x_227, x_3, x_42);
if (lean_is_scalar(x_211)) {
 x_229 = lean_alloc_ctor(0, 3, 1);
} else {
 x_229 = x_211;
}
lean_ctor_set(x_229, 0, x_208);
lean_ctor_set(x_229, 1, x_228);
lean_ctor_set(x_229, 2, x_219);
lean_ctor_set_uint8(x_229, sizeof(void*)*3, x_72);
x_230 = lean_st_ref_set(x_7, x_229, x_207);
x_231 = lean_ctor_get(x_230, 1);
lean_inc(x_231);
if (lean_is_exclusive(x_230)) {
 lean_ctor_release(x_230, 0);
 lean_ctor_release(x_230, 1);
 x_232 = x_230;
} else {
 lean_dec_ref(x_230);
 x_232 = lean_box(0);
}
lean_inc(x_1);
x_233 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_233, 0, x_1);
if (lean_is_scalar(x_232)) {
 x_234 = lean_alloc_ctor(0, 2, 0);
} else {
 x_234 = x_232;
}
lean_ctor_set(x_234, 0, x_233);
lean_ctor_set(x_234, 1, x_231);
x_18 = x_234;
goto block_34;
}
}
else
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; 
lean_dec(x_188);
lean_dec(x_187);
lean_free_object(x_42);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
x_235 = lean_ctor_get(x_200, 0);
lean_inc(x_235);
x_236 = lean_ctor_get(x_200, 1);
lean_inc(x_236);
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 lean_ctor_release(x_200, 1);
 x_237 = x_200;
} else {
 lean_dec_ref(x_200);
 x_237 = lean_box(0);
}
if (lean_is_scalar(x_237)) {
 x_238 = lean_alloc_ctor(1, 2, 0);
} else {
 x_238 = x_237;
}
lean_ctor_set(x_238, 0, x_235);
lean_ctor_set(x_238, 1, x_236);
x_18 = x_238;
goto block_34;
}
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; 
lean_dec(x_196);
lean_dec(x_188);
lean_dec(x_187);
lean_free_object(x_75);
lean_free_object(x_42);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
x_239 = lean_ctor_get(x_197, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_197, 1);
lean_inc(x_240);
if (lean_is_exclusive(x_197)) {
 lean_ctor_release(x_197, 0);
 lean_ctor_release(x_197, 1);
 x_241 = x_197;
} else {
 lean_dec_ref(x_197);
 x_241 = lean_box(0);
}
if (lean_is_scalar(x_241)) {
 x_242 = lean_alloc_ctor(1, 2, 0);
} else {
 x_242 = x_241;
}
lean_ctor_set(x_242, 0, x_239);
lean_ctor_set(x_242, 1, x_240);
x_18 = x_242;
goto block_34;
}
}
else
{
lean_object* x_243; lean_object* x_244; 
lean_dec(x_188);
lean_dec(x_187);
lean_free_object(x_75);
lean_free_object(x_42);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_inc(x_1);
x_243 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_243, 0, x_1);
x_244 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_244, 0, x_243);
lean_ctor_set(x_244, 1, x_186);
x_18 = x_244;
goto block_34;
}
}
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; uint8_t x_250; 
x_245 = lean_ctor_get(x_75, 0);
lean_inc(x_245);
lean_dec(x_75);
x_246 = lean_ctor_get(x_74, 1);
lean_inc(x_246);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_247 = x_74;
} else {
 lean_dec_ref(x_74);
 x_247 = lean_box(0);
}
x_248 = lean_ctor_get(x_245, 0);
lean_inc(x_248);
x_249 = lean_ctor_get(x_245, 1);
lean_inc(x_249);
lean_dec(x_245);
x_250 = lean_expr_eqv(x_249, x_60);
lean_dec(x_60);
if (x_250 == 0)
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
lean_dec(x_247);
x_251 = lean_st_ref_get(x_11, x_246);
x_252 = lean_ctor_get(x_251, 1);
lean_inc(x_252);
lean_dec(x_251);
x_253 = lean_st_ref_get(x_7, x_252);
x_254 = lean_ctor_get(x_253, 0);
lean_inc(x_254);
x_255 = lean_ctor_get(x_253, 1);
lean_inc(x_255);
lean_dec(x_253);
x_256 = lean_ctor_get(x_254, 2);
lean_inc(x_256);
lean_dec(x_254);
x_257 = lean_ctor_get(x_256, 1);
lean_inc(x_257);
lean_dec(x_256);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_249);
lean_inc(x_248);
x_258 = l_Lean_Meta_mkExpectedTypeHint(x_248, x_249, x_8, x_9, x_10, x_11, x_255);
if (lean_obj_tag(x_258) == 0)
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; 
x_259 = lean_ctor_get(x_258, 0);
lean_inc(x_259);
x_260 = lean_ctor_get(x_258, 1);
lean_inc(x_260);
lean_dec(x_258);
lean_inc(x_59);
x_261 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_261, 0, x_59);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_262 = l_Lean_Meta_SimpTheoremsArray_addTheorem(x_257, x_259, x_261, x_8, x_9, x_10, x_11, x_260);
if (lean_obj_tag(x_262) == 0)
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; uint8_t x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; 
x_263 = lean_ctor_get(x_262, 0);
lean_inc(x_263);
x_264 = lean_ctor_get(x_262, 1);
lean_inc(x_264);
lean_dec(x_262);
x_265 = lean_st_ref_get(x_11, x_264);
x_266 = lean_ctor_get(x_265, 1);
lean_inc(x_266);
lean_dec(x_265);
x_267 = lean_st_ref_take(x_7, x_266);
x_268 = lean_ctor_get(x_267, 0);
lean_inc(x_268);
x_269 = lean_ctor_get(x_267, 1);
lean_inc(x_269);
lean_dec(x_267);
x_270 = lean_ctor_get(x_268, 0);
lean_inc(x_270);
x_271 = lean_ctor_get(x_268, 1);
lean_inc(x_271);
x_272 = lean_ctor_get(x_268, 2);
lean_inc(x_272);
if (lean_is_exclusive(x_268)) {
 lean_ctor_release(x_268, 0);
 lean_ctor_release(x_268, 1);
 lean_ctor_release(x_268, 2);
 x_273 = x_268;
} else {
 lean_dec_ref(x_268);
 x_273 = lean_box(0);
}
x_274 = lean_array_get_size(x_271);
x_275 = lean_nat_dec_lt(x_3, x_274);
lean_dec(x_274);
x_276 = lean_ctor_get(x_272, 0);
lean_inc(x_276);
x_277 = lean_ctor_get(x_272, 2);
lean_inc(x_277);
x_278 = lean_ctor_get(x_272, 3);
lean_inc(x_278);
x_279 = lean_ctor_get(x_272, 4);
lean_inc(x_279);
if (lean_is_exclusive(x_272)) {
 lean_ctor_release(x_272, 0);
 lean_ctor_release(x_272, 1);
 lean_ctor_release(x_272, 2);
 lean_ctor_release(x_272, 3);
 lean_ctor_release(x_272, 4);
 x_280 = x_272;
} else {
 lean_dec_ref(x_272);
 x_280 = lean_box(0);
}
if (lean_is_scalar(x_280)) {
 x_281 = lean_alloc_ctor(0, 5, 0);
} else {
 x_281 = x_280;
}
lean_ctor_set(x_281, 0, x_276);
lean_ctor_set(x_281, 1, x_263);
lean_ctor_set(x_281, 2, x_277);
lean_ctor_set(x_281, 3, x_278);
lean_ctor_set(x_281, 4, x_279);
if (x_275 == 0)
{
lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; 
lean_dec(x_249);
lean_dec(x_248);
lean_free_object(x_42);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
if (lean_is_scalar(x_273)) {
 x_282 = lean_alloc_ctor(0, 3, 1);
} else {
 x_282 = x_273;
}
lean_ctor_set(x_282, 0, x_270);
lean_ctor_set(x_282, 1, x_271);
lean_ctor_set(x_282, 2, x_281);
lean_ctor_set_uint8(x_282, sizeof(void*)*3, x_72);
x_283 = lean_st_ref_set(x_7, x_282, x_269);
x_284 = lean_ctor_get(x_283, 1);
lean_inc(x_284);
if (lean_is_exclusive(x_283)) {
 lean_ctor_release(x_283, 0);
 lean_ctor_release(x_283, 1);
 x_285 = x_283;
} else {
 lean_dec_ref(x_283);
 x_285 = lean_box(0);
}
lean_inc(x_1);
x_286 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_286, 0, x_1);
if (lean_is_scalar(x_285)) {
 x_287 = lean_alloc_ctor(0, 2, 0);
} else {
 x_287 = x_285;
}
lean_ctor_set(x_287, 0, x_286);
lean_ctor_set(x_287, 1, x_284);
x_18 = x_287;
goto block_34;
}
else
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; 
x_288 = lean_box(0);
x_289 = lean_array_fset(x_271, x_3, x_288);
lean_ctor_set(x_42, 4, x_248);
lean_ctor_set(x_42, 3, x_249);
x_290 = lean_array_fset(x_289, x_3, x_42);
if (lean_is_scalar(x_273)) {
 x_291 = lean_alloc_ctor(0, 3, 1);
} else {
 x_291 = x_273;
}
lean_ctor_set(x_291, 0, x_270);
lean_ctor_set(x_291, 1, x_290);
lean_ctor_set(x_291, 2, x_281);
lean_ctor_set_uint8(x_291, sizeof(void*)*3, x_72);
x_292 = lean_st_ref_set(x_7, x_291, x_269);
x_293 = lean_ctor_get(x_292, 1);
lean_inc(x_293);
if (lean_is_exclusive(x_292)) {
 lean_ctor_release(x_292, 0);
 lean_ctor_release(x_292, 1);
 x_294 = x_292;
} else {
 lean_dec_ref(x_292);
 x_294 = lean_box(0);
}
lean_inc(x_1);
x_295 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_295, 0, x_1);
if (lean_is_scalar(x_294)) {
 x_296 = lean_alloc_ctor(0, 2, 0);
} else {
 x_296 = x_294;
}
lean_ctor_set(x_296, 0, x_295);
lean_ctor_set(x_296, 1, x_293);
x_18 = x_296;
goto block_34;
}
}
else
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; 
lean_dec(x_249);
lean_dec(x_248);
lean_free_object(x_42);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
x_297 = lean_ctor_get(x_262, 0);
lean_inc(x_297);
x_298 = lean_ctor_get(x_262, 1);
lean_inc(x_298);
if (lean_is_exclusive(x_262)) {
 lean_ctor_release(x_262, 0);
 lean_ctor_release(x_262, 1);
 x_299 = x_262;
} else {
 lean_dec_ref(x_262);
 x_299 = lean_box(0);
}
if (lean_is_scalar(x_299)) {
 x_300 = lean_alloc_ctor(1, 2, 0);
} else {
 x_300 = x_299;
}
lean_ctor_set(x_300, 0, x_297);
lean_ctor_set(x_300, 1, x_298);
x_18 = x_300;
goto block_34;
}
}
else
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; 
lean_dec(x_257);
lean_dec(x_249);
lean_dec(x_248);
lean_free_object(x_42);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
x_301 = lean_ctor_get(x_258, 0);
lean_inc(x_301);
x_302 = lean_ctor_get(x_258, 1);
lean_inc(x_302);
if (lean_is_exclusive(x_258)) {
 lean_ctor_release(x_258, 0);
 lean_ctor_release(x_258, 1);
 x_303 = x_258;
} else {
 lean_dec_ref(x_258);
 x_303 = lean_box(0);
}
if (lean_is_scalar(x_303)) {
 x_304 = lean_alloc_ctor(1, 2, 0);
} else {
 x_304 = x_303;
}
lean_ctor_set(x_304, 0, x_301);
lean_ctor_set(x_304, 1, x_302);
x_18 = x_304;
goto block_34;
}
}
else
{
lean_object* x_305; lean_object* x_306; 
lean_dec(x_249);
lean_dec(x_248);
lean_free_object(x_42);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_inc(x_1);
x_305 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_305, 0, x_1);
if (lean_is_scalar(x_247)) {
 x_306 = lean_alloc_ctor(0, 2, 0);
} else {
 x_306 = x_247;
}
lean_ctor_set(x_306, 0, x_305);
lean_ctor_set(x_306, 1, x_246);
x_18 = x_306;
goto block_34;
}
}
}
}
else
{
uint8_t x_307; 
lean_free_object(x_42);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
x_307 = !lean_is_exclusive(x_74);
if (x_307 == 0)
{
x_18 = x_74;
goto block_34;
}
else
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; 
x_308 = lean_ctor_get(x_74, 0);
x_309 = lean_ctor_get(x_74, 1);
lean_inc(x_309);
lean_inc(x_308);
lean_dec(x_74);
x_310 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_310, 0, x_308);
lean_ctor_set(x_310, 1, x_309);
x_18 = x_310;
goto block_34;
}
}
}
else
{
lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; uint8_t x_323; lean_object* x_324; lean_object* x_325; 
x_311 = lean_ctor_get(x_48, 0);
x_312 = lean_ctor_get(x_48, 2);
x_313 = lean_ctor_get(x_48, 3);
x_314 = lean_ctor_get(x_48, 4);
lean_inc(x_314);
lean_inc(x_313);
lean_inc(x_312);
lean_inc(x_311);
lean_dec(x_48);
x_315 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_315, 0, x_311);
lean_ctor_set(x_315, 1, x_62);
lean_ctor_set(x_315, 2, x_312);
lean_ctor_set(x_315, 3, x_313);
lean_ctor_set(x_315, 4, x_314);
x_316 = lean_st_ref_get(x_11, x_53);
x_317 = lean_ctor_get(x_316, 1);
lean_inc(x_317);
lean_dec(x_316);
x_318 = lean_st_ref_get(x_7, x_317);
x_319 = lean_ctor_get(x_318, 0);
lean_inc(x_319);
x_320 = lean_ctor_get(x_318, 1);
lean_inc(x_320);
lean_dec(x_318);
x_321 = lean_ctor_get(x_319, 0);
lean_inc(x_321);
lean_dec(x_319);
x_322 = lean_box(0);
x_323 = 1;
x_324 = l_Lean_Meta_SimpAll_State_entries___default___closed__1;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_60);
x_325 = l_Lean_Meta_simpStep(x_321, x_61, x_60, x_315, x_322, x_323, x_324, x_324, x_8, x_9, x_10, x_11, x_320);
if (lean_obj_tag(x_325) == 0)
{
lean_object* x_326; 
x_326 = lean_ctor_get(x_325, 0);
lean_inc(x_326);
if (lean_obj_tag(x_326) == 0)
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; 
lean_free_object(x_42);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
x_327 = lean_ctor_get(x_325, 1);
lean_inc(x_327);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 x_328 = x_325;
} else {
 lean_dec_ref(x_325);
 x_328 = lean_box(0);
}
x_329 = l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___closed__3;
if (lean_is_scalar(x_328)) {
 x_330 = lean_alloc_ctor(0, 2, 0);
} else {
 x_330 = x_328;
}
lean_ctor_set(x_330, 0, x_329);
lean_ctor_set(x_330, 1, x_327);
x_18 = x_330;
goto block_34;
}
else
{
lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; uint8_t x_337; 
x_331 = lean_ctor_get(x_326, 0);
lean_inc(x_331);
if (lean_is_exclusive(x_326)) {
 lean_ctor_release(x_326, 0);
 x_332 = x_326;
} else {
 lean_dec_ref(x_326);
 x_332 = lean_box(0);
}
x_333 = lean_ctor_get(x_325, 1);
lean_inc(x_333);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 x_334 = x_325;
} else {
 lean_dec_ref(x_325);
 x_334 = lean_box(0);
}
x_335 = lean_ctor_get(x_331, 0);
lean_inc(x_335);
x_336 = lean_ctor_get(x_331, 1);
lean_inc(x_336);
lean_dec(x_331);
x_337 = lean_expr_eqv(x_336, x_60);
lean_dec(x_60);
if (x_337 == 0)
{
lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; 
lean_dec(x_334);
x_338 = lean_st_ref_get(x_11, x_333);
x_339 = lean_ctor_get(x_338, 1);
lean_inc(x_339);
lean_dec(x_338);
x_340 = lean_st_ref_get(x_7, x_339);
x_341 = lean_ctor_get(x_340, 0);
lean_inc(x_341);
x_342 = lean_ctor_get(x_340, 1);
lean_inc(x_342);
lean_dec(x_340);
x_343 = lean_ctor_get(x_341, 2);
lean_inc(x_343);
lean_dec(x_341);
x_344 = lean_ctor_get(x_343, 1);
lean_inc(x_344);
lean_dec(x_343);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_336);
lean_inc(x_335);
x_345 = l_Lean_Meta_mkExpectedTypeHint(x_335, x_336, x_8, x_9, x_10, x_11, x_342);
if (lean_obj_tag(x_345) == 0)
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; 
x_346 = lean_ctor_get(x_345, 0);
lean_inc(x_346);
x_347 = lean_ctor_get(x_345, 1);
lean_inc(x_347);
lean_dec(x_345);
lean_inc(x_59);
if (lean_is_scalar(x_332)) {
 x_348 = lean_alloc_ctor(1, 1, 0);
} else {
 x_348 = x_332;
}
lean_ctor_set(x_348, 0, x_59);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_349 = l_Lean_Meta_SimpTheoremsArray_addTheorem(x_344, x_346, x_348, x_8, x_9, x_10, x_11, x_347);
if (lean_obj_tag(x_349) == 0)
{
lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; uint8_t x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; 
x_350 = lean_ctor_get(x_349, 0);
lean_inc(x_350);
x_351 = lean_ctor_get(x_349, 1);
lean_inc(x_351);
lean_dec(x_349);
x_352 = lean_st_ref_get(x_11, x_351);
x_353 = lean_ctor_get(x_352, 1);
lean_inc(x_353);
lean_dec(x_352);
x_354 = lean_st_ref_take(x_7, x_353);
x_355 = lean_ctor_get(x_354, 0);
lean_inc(x_355);
x_356 = lean_ctor_get(x_354, 1);
lean_inc(x_356);
lean_dec(x_354);
x_357 = lean_ctor_get(x_355, 0);
lean_inc(x_357);
x_358 = lean_ctor_get(x_355, 1);
lean_inc(x_358);
x_359 = lean_ctor_get(x_355, 2);
lean_inc(x_359);
if (lean_is_exclusive(x_355)) {
 lean_ctor_release(x_355, 0);
 lean_ctor_release(x_355, 1);
 lean_ctor_release(x_355, 2);
 x_360 = x_355;
} else {
 lean_dec_ref(x_355);
 x_360 = lean_box(0);
}
x_361 = lean_array_get_size(x_358);
x_362 = lean_nat_dec_lt(x_3, x_361);
lean_dec(x_361);
x_363 = lean_ctor_get(x_359, 0);
lean_inc(x_363);
x_364 = lean_ctor_get(x_359, 2);
lean_inc(x_364);
x_365 = lean_ctor_get(x_359, 3);
lean_inc(x_365);
x_366 = lean_ctor_get(x_359, 4);
lean_inc(x_366);
if (lean_is_exclusive(x_359)) {
 lean_ctor_release(x_359, 0);
 lean_ctor_release(x_359, 1);
 lean_ctor_release(x_359, 2);
 lean_ctor_release(x_359, 3);
 lean_ctor_release(x_359, 4);
 x_367 = x_359;
} else {
 lean_dec_ref(x_359);
 x_367 = lean_box(0);
}
if (lean_is_scalar(x_367)) {
 x_368 = lean_alloc_ctor(0, 5, 0);
} else {
 x_368 = x_367;
}
lean_ctor_set(x_368, 0, x_363);
lean_ctor_set(x_368, 1, x_350);
lean_ctor_set(x_368, 2, x_364);
lean_ctor_set(x_368, 3, x_365);
lean_ctor_set(x_368, 4, x_366);
if (x_362 == 0)
{
lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; 
lean_dec(x_336);
lean_dec(x_335);
lean_free_object(x_42);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
if (lean_is_scalar(x_360)) {
 x_369 = lean_alloc_ctor(0, 3, 1);
} else {
 x_369 = x_360;
}
lean_ctor_set(x_369, 0, x_357);
lean_ctor_set(x_369, 1, x_358);
lean_ctor_set(x_369, 2, x_368);
lean_ctor_set_uint8(x_369, sizeof(void*)*3, x_323);
x_370 = lean_st_ref_set(x_7, x_369, x_356);
x_371 = lean_ctor_get(x_370, 1);
lean_inc(x_371);
if (lean_is_exclusive(x_370)) {
 lean_ctor_release(x_370, 0);
 lean_ctor_release(x_370, 1);
 x_372 = x_370;
} else {
 lean_dec_ref(x_370);
 x_372 = lean_box(0);
}
lean_inc(x_1);
x_373 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_373, 0, x_1);
if (lean_is_scalar(x_372)) {
 x_374 = lean_alloc_ctor(0, 2, 0);
} else {
 x_374 = x_372;
}
lean_ctor_set(x_374, 0, x_373);
lean_ctor_set(x_374, 1, x_371);
x_18 = x_374;
goto block_34;
}
else
{
lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; 
x_375 = lean_box(0);
x_376 = lean_array_fset(x_358, x_3, x_375);
lean_ctor_set(x_42, 4, x_335);
lean_ctor_set(x_42, 3, x_336);
x_377 = lean_array_fset(x_376, x_3, x_42);
if (lean_is_scalar(x_360)) {
 x_378 = lean_alloc_ctor(0, 3, 1);
} else {
 x_378 = x_360;
}
lean_ctor_set(x_378, 0, x_357);
lean_ctor_set(x_378, 1, x_377);
lean_ctor_set(x_378, 2, x_368);
lean_ctor_set_uint8(x_378, sizeof(void*)*3, x_323);
x_379 = lean_st_ref_set(x_7, x_378, x_356);
x_380 = lean_ctor_get(x_379, 1);
lean_inc(x_380);
if (lean_is_exclusive(x_379)) {
 lean_ctor_release(x_379, 0);
 lean_ctor_release(x_379, 1);
 x_381 = x_379;
} else {
 lean_dec_ref(x_379);
 x_381 = lean_box(0);
}
lean_inc(x_1);
x_382 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_382, 0, x_1);
if (lean_is_scalar(x_381)) {
 x_383 = lean_alloc_ctor(0, 2, 0);
} else {
 x_383 = x_381;
}
lean_ctor_set(x_383, 0, x_382);
lean_ctor_set(x_383, 1, x_380);
x_18 = x_383;
goto block_34;
}
}
else
{
lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; 
lean_dec(x_336);
lean_dec(x_335);
lean_free_object(x_42);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
x_384 = lean_ctor_get(x_349, 0);
lean_inc(x_384);
x_385 = lean_ctor_get(x_349, 1);
lean_inc(x_385);
if (lean_is_exclusive(x_349)) {
 lean_ctor_release(x_349, 0);
 lean_ctor_release(x_349, 1);
 x_386 = x_349;
} else {
 lean_dec_ref(x_349);
 x_386 = lean_box(0);
}
if (lean_is_scalar(x_386)) {
 x_387 = lean_alloc_ctor(1, 2, 0);
} else {
 x_387 = x_386;
}
lean_ctor_set(x_387, 0, x_384);
lean_ctor_set(x_387, 1, x_385);
x_18 = x_387;
goto block_34;
}
}
else
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; 
lean_dec(x_344);
lean_dec(x_336);
lean_dec(x_335);
lean_dec(x_332);
lean_free_object(x_42);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
x_388 = lean_ctor_get(x_345, 0);
lean_inc(x_388);
x_389 = lean_ctor_get(x_345, 1);
lean_inc(x_389);
if (lean_is_exclusive(x_345)) {
 lean_ctor_release(x_345, 0);
 lean_ctor_release(x_345, 1);
 x_390 = x_345;
} else {
 lean_dec_ref(x_345);
 x_390 = lean_box(0);
}
if (lean_is_scalar(x_390)) {
 x_391 = lean_alloc_ctor(1, 2, 0);
} else {
 x_391 = x_390;
}
lean_ctor_set(x_391, 0, x_388);
lean_ctor_set(x_391, 1, x_389);
x_18 = x_391;
goto block_34;
}
}
else
{
lean_object* x_392; lean_object* x_393; 
lean_dec(x_336);
lean_dec(x_335);
lean_dec(x_332);
lean_free_object(x_42);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_inc(x_1);
x_392 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_392, 0, x_1);
if (lean_is_scalar(x_334)) {
 x_393 = lean_alloc_ctor(0, 2, 0);
} else {
 x_393 = x_334;
}
lean_ctor_set(x_393, 0, x_392);
lean_ctor_set(x_393, 1, x_333);
x_18 = x_393;
goto block_34;
}
}
}
else
{
lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; 
lean_free_object(x_42);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
x_394 = lean_ctor_get(x_325, 0);
lean_inc(x_394);
x_395 = lean_ctor_get(x_325, 1);
lean_inc(x_395);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 x_396 = x_325;
} else {
 lean_dec_ref(x_325);
 x_396 = lean_box(0);
}
if (lean_is_scalar(x_396)) {
 x_397 = lean_alloc_ctor(1, 2, 0);
} else {
 x_397 = x_396;
}
lean_ctor_set(x_397, 0, x_394);
lean_ctor_set(x_397, 1, x_395);
x_18 = x_397;
goto block_34;
}
}
}
else
{
lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; uint8_t x_417; lean_object* x_418; lean_object* x_419; 
x_398 = lean_ctor_get(x_42, 0);
x_399 = lean_ctor_get(x_42, 1);
x_400 = lean_ctor_get(x_42, 2);
x_401 = lean_ctor_get(x_42, 3);
x_402 = lean_ctor_get(x_42, 4);
lean_inc(x_402);
lean_inc(x_401);
lean_inc(x_400);
lean_inc(x_399);
lean_inc(x_398);
lean_dec(x_42);
lean_inc(x_400);
x_403 = l_Lean_Meta_SimpTheoremsArray_eraseTheorem(x_55, x_400);
x_404 = lean_ctor_get(x_48, 0);
lean_inc(x_404);
x_405 = lean_ctor_get(x_48, 2);
lean_inc(x_405);
x_406 = lean_ctor_get(x_48, 3);
lean_inc(x_406);
x_407 = lean_ctor_get(x_48, 4);
lean_inc(x_407);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 lean_ctor_release(x_48, 2);
 lean_ctor_release(x_48, 3);
 lean_ctor_release(x_48, 4);
 x_408 = x_48;
} else {
 lean_dec_ref(x_48);
 x_408 = lean_box(0);
}
if (lean_is_scalar(x_408)) {
 x_409 = lean_alloc_ctor(0, 5, 0);
} else {
 x_409 = x_408;
}
lean_ctor_set(x_409, 0, x_404);
lean_ctor_set(x_409, 1, x_403);
lean_ctor_set(x_409, 2, x_405);
lean_ctor_set(x_409, 3, x_406);
lean_ctor_set(x_409, 4, x_407);
x_410 = lean_st_ref_get(x_11, x_53);
x_411 = lean_ctor_get(x_410, 1);
lean_inc(x_411);
lean_dec(x_410);
x_412 = lean_st_ref_get(x_7, x_411);
x_413 = lean_ctor_get(x_412, 0);
lean_inc(x_413);
x_414 = lean_ctor_get(x_412, 1);
lean_inc(x_414);
lean_dec(x_412);
x_415 = lean_ctor_get(x_413, 0);
lean_inc(x_415);
lean_dec(x_413);
x_416 = lean_box(0);
x_417 = 1;
x_418 = l_Lean_Meta_SimpAll_State_entries___default___closed__1;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_401);
x_419 = l_Lean_Meta_simpStep(x_415, x_402, x_401, x_409, x_416, x_417, x_418, x_418, x_8, x_9, x_10, x_11, x_414);
if (lean_obj_tag(x_419) == 0)
{
lean_object* x_420; 
x_420 = lean_ctor_get(x_419, 0);
lean_inc(x_420);
if (lean_obj_tag(x_420) == 0)
{
lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; 
lean_dec(x_401);
lean_dec(x_400);
lean_dec(x_399);
lean_dec(x_398);
x_421 = lean_ctor_get(x_419, 1);
lean_inc(x_421);
if (lean_is_exclusive(x_419)) {
 lean_ctor_release(x_419, 0);
 lean_ctor_release(x_419, 1);
 x_422 = x_419;
} else {
 lean_dec_ref(x_419);
 x_422 = lean_box(0);
}
x_423 = l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___closed__3;
if (lean_is_scalar(x_422)) {
 x_424 = lean_alloc_ctor(0, 2, 0);
} else {
 x_424 = x_422;
}
lean_ctor_set(x_424, 0, x_423);
lean_ctor_set(x_424, 1, x_421);
x_18 = x_424;
goto block_34;
}
else
{
lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; uint8_t x_431; 
x_425 = lean_ctor_get(x_420, 0);
lean_inc(x_425);
if (lean_is_exclusive(x_420)) {
 lean_ctor_release(x_420, 0);
 x_426 = x_420;
} else {
 lean_dec_ref(x_420);
 x_426 = lean_box(0);
}
x_427 = lean_ctor_get(x_419, 1);
lean_inc(x_427);
if (lean_is_exclusive(x_419)) {
 lean_ctor_release(x_419, 0);
 lean_ctor_release(x_419, 1);
 x_428 = x_419;
} else {
 lean_dec_ref(x_419);
 x_428 = lean_box(0);
}
x_429 = lean_ctor_get(x_425, 0);
lean_inc(x_429);
x_430 = lean_ctor_get(x_425, 1);
lean_inc(x_430);
lean_dec(x_425);
x_431 = lean_expr_eqv(x_430, x_401);
lean_dec(x_401);
if (x_431 == 0)
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; 
lean_dec(x_428);
x_432 = lean_st_ref_get(x_11, x_427);
x_433 = lean_ctor_get(x_432, 1);
lean_inc(x_433);
lean_dec(x_432);
x_434 = lean_st_ref_get(x_7, x_433);
x_435 = lean_ctor_get(x_434, 0);
lean_inc(x_435);
x_436 = lean_ctor_get(x_434, 1);
lean_inc(x_436);
lean_dec(x_434);
x_437 = lean_ctor_get(x_435, 2);
lean_inc(x_437);
lean_dec(x_435);
x_438 = lean_ctor_get(x_437, 1);
lean_inc(x_438);
lean_dec(x_437);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_430);
lean_inc(x_429);
x_439 = l_Lean_Meta_mkExpectedTypeHint(x_429, x_430, x_8, x_9, x_10, x_11, x_436);
if (lean_obj_tag(x_439) == 0)
{
lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; 
x_440 = lean_ctor_get(x_439, 0);
lean_inc(x_440);
x_441 = lean_ctor_get(x_439, 1);
lean_inc(x_441);
lean_dec(x_439);
lean_inc(x_400);
if (lean_is_scalar(x_426)) {
 x_442 = lean_alloc_ctor(1, 1, 0);
} else {
 x_442 = x_426;
}
lean_ctor_set(x_442, 0, x_400);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_443 = l_Lean_Meta_SimpTheoremsArray_addTheorem(x_438, x_440, x_442, x_8, x_9, x_10, x_11, x_441);
if (lean_obj_tag(x_443) == 0)
{
lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; uint8_t x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; 
x_444 = lean_ctor_get(x_443, 0);
lean_inc(x_444);
x_445 = lean_ctor_get(x_443, 1);
lean_inc(x_445);
lean_dec(x_443);
x_446 = lean_st_ref_get(x_11, x_445);
x_447 = lean_ctor_get(x_446, 1);
lean_inc(x_447);
lean_dec(x_446);
x_448 = lean_st_ref_take(x_7, x_447);
x_449 = lean_ctor_get(x_448, 0);
lean_inc(x_449);
x_450 = lean_ctor_get(x_448, 1);
lean_inc(x_450);
lean_dec(x_448);
x_451 = lean_ctor_get(x_449, 0);
lean_inc(x_451);
x_452 = lean_ctor_get(x_449, 1);
lean_inc(x_452);
x_453 = lean_ctor_get(x_449, 2);
lean_inc(x_453);
if (lean_is_exclusive(x_449)) {
 lean_ctor_release(x_449, 0);
 lean_ctor_release(x_449, 1);
 lean_ctor_release(x_449, 2);
 x_454 = x_449;
} else {
 lean_dec_ref(x_449);
 x_454 = lean_box(0);
}
x_455 = lean_array_get_size(x_452);
x_456 = lean_nat_dec_lt(x_3, x_455);
lean_dec(x_455);
x_457 = lean_ctor_get(x_453, 0);
lean_inc(x_457);
x_458 = lean_ctor_get(x_453, 2);
lean_inc(x_458);
x_459 = lean_ctor_get(x_453, 3);
lean_inc(x_459);
x_460 = lean_ctor_get(x_453, 4);
lean_inc(x_460);
if (lean_is_exclusive(x_453)) {
 lean_ctor_release(x_453, 0);
 lean_ctor_release(x_453, 1);
 lean_ctor_release(x_453, 2);
 lean_ctor_release(x_453, 3);
 lean_ctor_release(x_453, 4);
 x_461 = x_453;
} else {
 lean_dec_ref(x_453);
 x_461 = lean_box(0);
}
if (lean_is_scalar(x_461)) {
 x_462 = lean_alloc_ctor(0, 5, 0);
} else {
 x_462 = x_461;
}
lean_ctor_set(x_462, 0, x_457);
lean_ctor_set(x_462, 1, x_444);
lean_ctor_set(x_462, 2, x_458);
lean_ctor_set(x_462, 3, x_459);
lean_ctor_set(x_462, 4, x_460);
if (x_456 == 0)
{
lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; 
lean_dec(x_430);
lean_dec(x_429);
lean_dec(x_400);
lean_dec(x_399);
lean_dec(x_398);
if (lean_is_scalar(x_454)) {
 x_463 = lean_alloc_ctor(0, 3, 1);
} else {
 x_463 = x_454;
}
lean_ctor_set(x_463, 0, x_451);
lean_ctor_set(x_463, 1, x_452);
lean_ctor_set(x_463, 2, x_462);
lean_ctor_set_uint8(x_463, sizeof(void*)*3, x_417);
x_464 = lean_st_ref_set(x_7, x_463, x_450);
x_465 = lean_ctor_get(x_464, 1);
lean_inc(x_465);
if (lean_is_exclusive(x_464)) {
 lean_ctor_release(x_464, 0);
 lean_ctor_release(x_464, 1);
 x_466 = x_464;
} else {
 lean_dec_ref(x_464);
 x_466 = lean_box(0);
}
lean_inc(x_1);
x_467 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_467, 0, x_1);
if (lean_is_scalar(x_466)) {
 x_468 = lean_alloc_ctor(0, 2, 0);
} else {
 x_468 = x_466;
}
lean_ctor_set(x_468, 0, x_467);
lean_ctor_set(x_468, 1, x_465);
x_18 = x_468;
goto block_34;
}
else
{
lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; 
x_469 = lean_box(0);
x_470 = lean_array_fset(x_452, x_3, x_469);
x_471 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_471, 0, x_398);
lean_ctor_set(x_471, 1, x_399);
lean_ctor_set(x_471, 2, x_400);
lean_ctor_set(x_471, 3, x_430);
lean_ctor_set(x_471, 4, x_429);
x_472 = lean_array_fset(x_470, x_3, x_471);
if (lean_is_scalar(x_454)) {
 x_473 = lean_alloc_ctor(0, 3, 1);
} else {
 x_473 = x_454;
}
lean_ctor_set(x_473, 0, x_451);
lean_ctor_set(x_473, 1, x_472);
lean_ctor_set(x_473, 2, x_462);
lean_ctor_set_uint8(x_473, sizeof(void*)*3, x_417);
x_474 = lean_st_ref_set(x_7, x_473, x_450);
x_475 = lean_ctor_get(x_474, 1);
lean_inc(x_475);
if (lean_is_exclusive(x_474)) {
 lean_ctor_release(x_474, 0);
 lean_ctor_release(x_474, 1);
 x_476 = x_474;
} else {
 lean_dec_ref(x_474);
 x_476 = lean_box(0);
}
lean_inc(x_1);
x_477 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_477, 0, x_1);
if (lean_is_scalar(x_476)) {
 x_478 = lean_alloc_ctor(0, 2, 0);
} else {
 x_478 = x_476;
}
lean_ctor_set(x_478, 0, x_477);
lean_ctor_set(x_478, 1, x_475);
x_18 = x_478;
goto block_34;
}
}
else
{
lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; 
lean_dec(x_430);
lean_dec(x_429);
lean_dec(x_400);
lean_dec(x_399);
lean_dec(x_398);
x_479 = lean_ctor_get(x_443, 0);
lean_inc(x_479);
x_480 = lean_ctor_get(x_443, 1);
lean_inc(x_480);
if (lean_is_exclusive(x_443)) {
 lean_ctor_release(x_443, 0);
 lean_ctor_release(x_443, 1);
 x_481 = x_443;
} else {
 lean_dec_ref(x_443);
 x_481 = lean_box(0);
}
if (lean_is_scalar(x_481)) {
 x_482 = lean_alloc_ctor(1, 2, 0);
} else {
 x_482 = x_481;
}
lean_ctor_set(x_482, 0, x_479);
lean_ctor_set(x_482, 1, x_480);
x_18 = x_482;
goto block_34;
}
}
else
{
lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; 
lean_dec(x_438);
lean_dec(x_430);
lean_dec(x_429);
lean_dec(x_426);
lean_dec(x_400);
lean_dec(x_399);
lean_dec(x_398);
x_483 = lean_ctor_get(x_439, 0);
lean_inc(x_483);
x_484 = lean_ctor_get(x_439, 1);
lean_inc(x_484);
if (lean_is_exclusive(x_439)) {
 lean_ctor_release(x_439, 0);
 lean_ctor_release(x_439, 1);
 x_485 = x_439;
} else {
 lean_dec_ref(x_439);
 x_485 = lean_box(0);
}
if (lean_is_scalar(x_485)) {
 x_486 = lean_alloc_ctor(1, 2, 0);
} else {
 x_486 = x_485;
}
lean_ctor_set(x_486, 0, x_483);
lean_ctor_set(x_486, 1, x_484);
x_18 = x_486;
goto block_34;
}
}
else
{
lean_object* x_487; lean_object* x_488; 
lean_dec(x_430);
lean_dec(x_429);
lean_dec(x_426);
lean_dec(x_400);
lean_dec(x_399);
lean_dec(x_398);
lean_inc(x_1);
x_487 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_487, 0, x_1);
if (lean_is_scalar(x_428)) {
 x_488 = lean_alloc_ctor(0, 2, 0);
} else {
 x_488 = x_428;
}
lean_ctor_set(x_488, 0, x_487);
lean_ctor_set(x_488, 1, x_427);
x_18 = x_488;
goto block_34;
}
}
}
else
{
lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; 
lean_dec(x_401);
lean_dec(x_400);
lean_dec(x_399);
lean_dec(x_398);
x_489 = lean_ctor_get(x_419, 0);
lean_inc(x_489);
x_490 = lean_ctor_get(x_419, 1);
lean_inc(x_490);
if (lean_is_exclusive(x_419)) {
 lean_ctor_release(x_419, 0);
 lean_ctor_release(x_419, 1);
 x_491 = x_419;
} else {
 lean_dec_ref(x_419);
 x_491 = lean_box(0);
}
if (lean_is_scalar(x_491)) {
 x_492 = lean_alloc_ctor(1, 2, 0);
} else {
 x_492 = x_491;
}
lean_ctor_set(x_492, 0, x_489);
lean_ctor_set(x_492, 1, x_490);
x_18 = x_492;
goto block_34;
}
}
block_34:
{
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
lean_dec(x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 0);
lean_dec(x_21);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
lean_dec(x_19);
lean_ctor_set(x_18, 0, x_22);
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_dec(x_18);
x_24 = lean_ctor_get(x_19, 0);
lean_inc(x_24);
lean_dec(x_19);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_18, 1);
lean_inc(x_26);
lean_dec(x_18);
x_27 = lean_ctor_get(x_19, 0);
lean_inc(x_27);
lean_dec(x_19);
x_28 = lean_nat_add(x_3, x_5);
lean_dec(x_3);
x_2 = x_17;
x_3 = x_28;
x_6 = x_27;
x_12 = x_26;
goto _start;
}
}
else
{
uint8_t x_30; 
lean_dec(x_17);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_18);
if (x_30 == 0)
{
return x_18;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_18, 0);
x_32 = lean_ctor_get(x_18, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_18);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
else
{
lean_object* x_493; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_493 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_493, 0, x_6);
lean_ctor_set(x_493, 1, x_12);
return x_493;
}
}
else
{
lean_object* x_494; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_494 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_494, 0, x_6);
lean_ctor_set(x_494, 1, x_12);
return x_494;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
lean_dec(x_1);
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_st_ref_get(x_2, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get_uint8(x_11, sizeof(void*)*3);
lean_dec(x_11);
if (x_12 == 0)
{
uint8_t x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 0);
lean_dec(x_14);
x_15 = 0;
x_16 = lean_box(x_15);
lean_ctor_set(x_10, 0, x_16);
return x_10;
}
else
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_dec(x_10);
x_18 = 0;
x_19 = lean_box(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_17);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_10, 1);
lean_inc(x_21);
lean_dec(x_10);
x_22 = l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop(x_2, x_3, x_4, x_5, x_6, x_21);
return x_22;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__1), 7, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_3, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_st_ref_get(x_7, x_13);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_st_ref_get(x_3, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_18, 2);
lean_inc(x_20);
lean_dec(x_18);
x_21 = 1;
x_22 = l_Lean_Meta_SimpAll_State_entries___default___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_14);
x_23 = l_Lean_Meta_simpTarget(x_14, x_20, x_1, x_21, x_22, x_22, x_4, x_5, x_6, x_7, x_19);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_25 = !lean_is_exclusive(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_23, 0);
lean_dec(x_26);
x_27 = lean_box(x_21);
lean_ctor_set(x_23, 0, x_27);
return x_23;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_23, 1);
lean_inc(x_28);
lean_dec(x_23);
x_29 = lean_box(x_21);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = lean_ctor_get(x_23, 1);
lean_inc(x_31);
lean_dec(x_23);
x_32 = lean_ctor_get(x_24, 0);
lean_inc(x_32);
lean_dec(x_24);
x_33 = l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__2___closed__1;
x_34 = lean_name_eq(x_14, x_32);
lean_dec(x_14);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_35 = lean_st_ref_get(x_7, x_31);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = lean_st_ref_take(x_3, x_36);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = !lean_is_exclusive(x_38);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_41 = lean_ctor_get(x_38, 0);
lean_dec(x_41);
lean_ctor_set(x_38, 0, x_32);
lean_ctor_set_uint8(x_38, sizeof(void*)*3, x_21);
x_42 = lean_st_ref_set(x_3, x_38, x_39);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = lean_box(0);
x_45 = lean_apply_7(x_33, x_44, x_3, x_4, x_5, x_6, x_7, x_43);
return x_45;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_46 = lean_ctor_get(x_38, 1);
x_47 = lean_ctor_get(x_38, 2);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_38);
x_48 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_48, 0, x_32);
lean_ctor_set(x_48, 1, x_46);
lean_ctor_set(x_48, 2, x_47);
lean_ctor_set_uint8(x_48, sizeof(void*)*3, x_21);
x_49 = lean_st_ref_set(x_3, x_48, x_39);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
x_51 = lean_box(0);
x_52 = lean_apply_7(x_33, x_51, x_3, x_4, x_5, x_6, x_7, x_50);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_32);
x_53 = lean_box(0);
x_54 = lean_apply_7(x_33, x_53, x_3, x_4, x_5, x_6, x_7, x_31);
return x_54;
}
}
}
else
{
uint8_t x_55; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_55 = !lean_is_exclusive(x_23);
if (x_55 == 0)
{
return x_23;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_23, 0);
x_57 = lean_ctor_get(x_23, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_23);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_st_ref_take(x_1, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_13 = 0;
lean_ctor_set_uint8(x_10, sizeof(void*)*3, x_13);
x_14 = lean_st_ref_set(x_1, x_10, x_11);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_st_ref_get(x_5, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_st_ref_get(x_1, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_array_get_size(x_21);
lean_dec(x_21);
x_23 = lean_box(0);
x_24 = l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___closed__1;
x_25 = lean_unsigned_to_nat(0u);
x_26 = lean_unsigned_to_nat(1u);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_22);
x_27 = l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1(x_24, x_22, x_25, x_22, x_26, x_24, x_1, x_2, x_3, x_4, x_5, x_20);
lean_dec(x_22);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
lean_dec(x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = lean_box(0);
x_32 = l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__2(x_23, x_31, x_1, x_2, x_3, x_4, x_5, x_30);
return x_32;
}
else
{
uint8_t x_33; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_27);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_27, 0);
lean_dec(x_34);
x_35 = lean_ctor_get(x_29, 0);
lean_inc(x_35);
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_35);
return x_27;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_27, 1);
lean_inc(x_36);
lean_dec(x_27);
x_37 = lean_ctor_get(x_29, 0);
lean_inc(x_37);
lean_dec(x_29);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_27);
if (x_39 == 0)
{
return x_27;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_27, 0);
x_41 = lean_ctor_get(x_27, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_27);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_43 = lean_ctor_get(x_10, 0);
x_44 = lean_ctor_get(x_10, 1);
x_45 = lean_ctor_get(x_10, 2);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_10);
x_46 = 0;
x_47 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_47, 0, x_43);
lean_ctor_set(x_47, 1, x_44);
lean_ctor_set(x_47, 2, x_45);
lean_ctor_set_uint8(x_47, sizeof(void*)*3, x_46);
x_48 = lean_st_ref_set(x_1, x_47, x_11);
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
lean_dec(x_48);
x_50 = lean_st_ref_get(x_5, x_49);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = lean_st_ref_get(x_1, x_51);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_array_get_size(x_55);
lean_dec(x_55);
x_57 = lean_box(0);
x_58 = l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___closed__1;
x_59 = lean_unsigned_to_nat(0u);
x_60 = lean_unsigned_to_nat(1u);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_56);
x_61 = l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1(x_58, x_56, x_59, x_56, x_60, x_58, x_1, x_2, x_3, x_4, x_5, x_54);
lean_dec(x_56);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
lean_dec(x_62);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_61, 1);
lean_inc(x_64);
lean_dec(x_61);
x_65 = lean_box(0);
x_66 = l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__2(x_57, x_65, x_1, x_2, x_3, x_4, x_5, x_64);
return x_66;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_67 = lean_ctor_get(x_61, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_68 = x_61;
} else {
 lean_dec_ref(x_61);
 x_68 = lean_box(0);
}
x_69 = lean_ctor_get(x_63, 0);
lean_inc(x_69);
lean_dec(x_63);
if (lean_is_scalar(x_68)) {
 x_70 = lean_alloc_ctor(0, 2, 0);
} else {
 x_70 = x_68;
}
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_67);
return x_70;
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_71 = lean_ctor_get(x_61, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_61, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_73 = x_61;
} else {
 lean_dec_ref(x_61);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(1, 2, 0);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_72);
return x_74;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 3);
lean_inc(x_9);
x_10 = lean_ctor_get(x_5, 4);
lean_inc(x_10);
lean_dec(x_5);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_9);
lean_ctor_set(x_11, 2, x_10);
x_12 = 1;
x_13 = lean_usize_add(x_2, x_12);
x_14 = lean_array_uset(x_7, x_2, x_11);
x_2 = x_13;
x_3 = x_14;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__2(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
lean_dec(x_5);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_11 = lean_array_uset(x_7, x_2, x_8);
x_2 = x_10;
x_3 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SimpAll_main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_7 = l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop(x_1, x_2, x_3, x_4, x_5, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; size_t x_27; lean_object* x_28; lean_object* x_29; 
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_st_ref_get(x_5, x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_st_ref_get(x_1, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_st_ref_get(x_5, x_17);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_st_ref_get(x_1, x_20);
lean_dec(x_1);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_array_get_size(x_24);
x_26 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_27 = 0;
lean_inc(x_24);
x_28 = l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__1(x_26, x_27, x_24);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_29 = l_Lean_Meta_assertHypotheses(x_18, x_28, x_2, x_3, x_4, x_5, x_23);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__2(x_26, x_27, x_24);
x_34 = l_Lean_Meta_tryClearMany(x_32, x_33, x_2, x_3, x_4, x_5, x_31);
if (lean_obj_tag(x_34) == 0)
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_34, 0);
x_37 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_34, 0, x_37);
return x_34;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_34, 0);
x_39 = lean_ctor_get(x_34, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_34);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_38);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
else
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_34);
if (x_42 == 0)
{
return x_34;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_34, 0);
x_44 = lean_ctor_get(x_34, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_34);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_24);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_46 = !lean_is_exclusive(x_29);
if (x_46 == 0)
{
return x_29;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_29, 0);
x_48 = lean_ctor_get(x_29, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_29);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_9);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_9, 0);
lean_dec(x_51);
x_52 = lean_box(0);
lean_ctor_set(x_9, 0, x_52);
return x_9;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_9, 1);
lean_inc(x_53);
lean_dec(x_9);
x_54 = lean_box(0);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_9);
if (x_56 == 0)
{
return x_9;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_9, 0);
x_58 = lean_ctor_get(x_9, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_9);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
uint8_t x_60; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_60 = !lean_is_exclusive(x_7);
if (x_60 == 0)
{
return x_7;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_7, 0);
x_62 = lean_ctor_get(x_7, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_7);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__1(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__2(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpAll___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_st_mk_ref(x_1, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_5);
lean_inc(x_10);
x_12 = l_Lean_Meta_SimpAll_main(x_10, x_2, x_3, x_4, x_5, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_st_ref_get(x_5, x_14);
lean_dec(x_5);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_st_ref_get(x_10, x_16);
lean_dec(x_10);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_13);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_10);
lean_dec(x_5);
x_22 = !lean_is_exclusive(x_12);
if (x_22 == 0)
{
return x_12;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_12, 0);
x_24 = lean_ctor_get(x_12, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_12);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpAll(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = 0;
x_9 = l_Lean_Meta_SimpAll_State_entries___default___closed__1;
lean_inc(x_1);
x_10 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
lean_ctor_set(x_10, 2, x_2);
lean_ctor_set_uint8(x_10, sizeof(void*)*3, x_8);
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_simpAll___lambda__1), 6, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = l_Lean_Meta_withMVarContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__1___rarg(x_1, x_11, x_3, x_4, x_5, x_6, x_7);
return x_12;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Clear(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Util(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Simp_SimpAll(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Clear(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Util(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_SimpAll_instInhabitedEntry___closed__1 = _init_l_Lean_Meta_SimpAll_instInhabitedEntry___closed__1();
l_Lean_Meta_SimpAll_instInhabitedEntry___closed__2 = _init_l_Lean_Meta_SimpAll_instInhabitedEntry___closed__2();
lean_mark_persistent(l_Lean_Meta_SimpAll_instInhabitedEntry___closed__2);
l_Lean_Meta_SimpAll_instInhabitedEntry___closed__3 = _init_l_Lean_Meta_SimpAll_instInhabitedEntry___closed__3();
lean_mark_persistent(l_Lean_Meta_SimpAll_instInhabitedEntry___closed__3);
l_Lean_Meta_SimpAll_instInhabitedEntry = _init_l_Lean_Meta_SimpAll_instInhabitedEntry();
lean_mark_persistent(l_Lean_Meta_SimpAll_instInhabitedEntry);
l_Lean_Meta_SimpAll_State_modified___default = _init_l_Lean_Meta_SimpAll_State_modified___default();
l_Lean_Meta_SimpAll_State_entries___default___closed__1 = _init_l_Lean_Meta_SimpAll_State_entries___default___closed__1();
lean_mark_persistent(l_Lean_Meta_SimpAll_State_entries___default___closed__1);
l_Lean_Meta_SimpAll_State_entries___default = _init_l_Lean_Meta_SimpAll_State_entries___default();
lean_mark_persistent(l_Lean_Meta_SimpAll_State_entries___default);
l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1___closed__1 = _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1___closed__1);
l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1___closed__2 = _init_l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1___closed__2();
lean_mark_persistent(l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1___closed__2);
l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___closed__1 = _init_l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___closed__1();
lean_mark_persistent(l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___closed__1);
l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___closed__2 = _init_l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___closed__2();
lean_mark_persistent(l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___closed__2);
l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___closed__3 = _init_l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___closed__3();
lean_mark_persistent(l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___closed__3);
l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__2___closed__1 = _init_l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__2___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__2___closed__1);
l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___closed__1 = _init_l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
