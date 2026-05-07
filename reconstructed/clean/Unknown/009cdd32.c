// Function: FUN_009cdd32
// Address: 009cdd32
// Size: 762 bytes
// Class: Unknown
// String references:
//   ".."

void FUN_009cdd32(string *param_1)

{
  int iVar1;
  string *this;
  void *pvVar2;
  string *psVar3;
  byte *this_ptr;
  bool bVar4;
  string local_f8 [24];
  byte local_e0;
  byte local_c8;
  byte local_b0 [24];
  byte local_98;
  string local_80 [24];
  uint64_t local_68;
  string *local_60;
  byte local_58;
  uint8_t uStack_57;
  uint16_t uStack_56;
  uint32_t uStack_54;
  void *local_50;
  uint64_t local_48;
  uint64_t local_40;
  string *local_38;
  
  psVar3 = local_f8;
  FUN_009cdaec();
  FUN_009ce11a();
  std::string::string(param_1,psVar3);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(param_1);
  }
  if (((byte)local_f8[0] & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_00ac86a0();
  psVar3 = local_80;
  FUN_00ac62d0();
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_00ac9c40();
  std::string::string(param_1,psVar3);
  local_38 = local_60;
  local_40 = local_68;
  this = local_60;
  FUN_00acb370();
  std::string::string(this,psVar3);
  if ((local_58 & 1) != 0) {
    operator_delete(this);
  }
  while (FUN_00ac92d0(), 1 < CONCAT22(uStack_56,CONCAT11(uStack_57,local_58))) {
    FUN_00ac9e20();
    pvVar2 = (void *)((uint64_t)local_60 ^ (uint64_t)local_38 | local_68 ^ local_40);
    if ((local_58 & 1) != 0) {
      operator_delete(pvVar2);
    }
    if (pvVar2 == (void *)0x0) break;
    FUN_00ac9740();
    FUN_00acb370();
  }
  FUN_00aca780();
  FUN_00ac86a0();
  pvVar2 = (void *)0x0;
  FUN_00ac67c0(0,local_b0);
  if ((*this_ptr & 1) != 0) {
    operator_delete(pvVar2);
  }
  *(void*)(this_ptr + 0x10) = local_48;
  *(void **)(this_ptr + 8) = local_50;
  *(uint64_t *)this_ptr = CONCAT44(uStack_54,CONCAT22(uStack_56,CONCAT11(uStack_57,local_58)));
  local_58 = 0;
  uStack_57 = 0;
  pvVar2 = local_50;
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_c8 & 1) != 0) {
    operator_delete(pvVar2);
  }
  FUN_00acb6a0();
  while( true ) {
    FUN_00ac9e20();
    pvVar2 = (void *)((uint64_t)local_60 ^ (uint64_t)local_38 | local_68 ^ local_40);
    bVar4 = pvVar2 == (void *)0x0;
    if ((local_58 & 1) != 0) {
      operator_delete(pvVar2);
    }
    if (bVar4) break;
    iVar1 = FUN_009ceee0();
    if (iVar1 == 0) {
      FUN_00aca780();
      if ((*this_ptr & 1) != 0) {
        operator_delete(pvVar2);
      }
      *(void*)(this_ptr + 0x10) = local_48;
      *(void **)(this_ptr + 8) = local_50;
      *(uint64_t *)this_ptr = CONCAT44(uStack_54,CONCAT22(uStack_56,CONCAT11(uStack_57,local_58)))
      ;
    }
    else {
      iVar1 = FUN_009ceee0();
      if (iVar1 != 0) {
        FUN_00ac9740();
      }
    }
    FUN_00acb370();
  }
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(pvVar2);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(pvVar2);
  }
  if ((local_e0 & 1) != 0) {
    operator_delete(pvVar2);
  }
  return;
}

