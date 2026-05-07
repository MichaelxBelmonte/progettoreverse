// Function: FUN_00a147bc
// Address: 00a147bc
// Size: 579 bytes
// Class: Unknown
// String references:
//   "Contents"
//   "Info.plist"

void FUN_00a147bc(string *param_1,string *param_2)

{
  char cVar1;
  char cVar2;
  void *pvVar3;
  string *psVar4;
  int64_t arg1;
  uint64_t local_88;
  uint32_t local_70;
  uint32_t local_58;
  uint64_t local_40;
  uint64_t local_38;
  
  cVar1 = (char)param_2;
  if (*(char *)(arg1 + 8) == '\0') {
    cVar2 = FUN_00abfd44();
    *(char *)(arg1 + 9) = cVar2;
    *(void*)(arg1 + 8) = 1;
  }
  else {
    cVar2 = *(char *)(arg1 + 9);
  }
  local_88 = 0;
  if (cVar2 == '\0') {
    FUN_00a1473a();
    std::string::string(param_1,param_2);
    FUN_00ac9740();
    local_88 = local_40;
    local_40 = 0;
    if ((local_58 & 1) != 0) {
      operator_delete(local_38);
    }
  }
  else {
    local_38 = param_1;
    if (*(int64_t *)(arg1 + 0x48) == 0) {
      pvVar3 = operator_new((ulong)param_1);
      param_2 = (string *)0x0;
      FUN_00ac099f();
      local_40 = *(uint64_t *)(arg1 + 0x48);
      *(void **)(arg1 + 0x48) = pvVar3;
      FUN_00a15260();
      local_38 = param_1;
    }
    std::string::operator=(local_38,param_2);
  }
  FUN_00a1473a();
  std::string::string(local_38,param_2);
  FUN_00ac9740();
  if ((local_40 & 1) != 0) {
    operator_delete(local_38);
  }
  if (cVar1 != '\0') {
    FUN_00a1473a();
    std::string::string(local_38,param_2);
    FUN_00ac9740();
    if ((local_58 & 1) != 0) {
      operator_delete(local_38);
    }
    psVar4 = (string *)0x0;
    FUN_00ac92d0();
    if (local_58 < 2) {
      FUN_00ac7de0();
    }
    FUN_00a1473a();
    std::string::string(local_38,psVar4);
    FUN_00ac9740();
    if ((local_70 & 1) != 0) {
      operator_delete(local_38);
    }
    FUN_00ac92d0();
    if (local_70 < 2) {
      FUN_00a1412a();
      FUN_009ce414();
      if ((local_70 & 1) != 0) {
        operator_delete(local_38);
      }
    }
    if ((local_58 & 1) != 0) {
      operator_delete(local_38);
    }
    if ((local_40 & 1) != 0) {
      operator_delete(local_38);
    }
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_38);
  }
  return;
}

