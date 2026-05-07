// Function: FUN_000b6c10
// Address: 000b6c10
// Size: 665 bytes
// Class: MDAsyncProcess
// String references:
//   "%@Insp2.gnui"

void FUN_000b6c10(uint64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  int64_t *plVar4;
  char cVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar6;
  int64_t **pplVar7;
  int64_t local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  uint32_t local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = *arg1;
  local_58 = 1;
  local_60 = &g_024c5048;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  pplVar7 = &local_60;
  local_50 = lVar1;
  FUN_00d8cb40(param_1,pplVar7);
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  local_60 = &g_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = 0;
  local_68 = '\0';
  FUN_01e51a60(param_1,&local_70);
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      local_60 = (int64_t *)0x0;
      local_58 = CONCAT31(local_58._1_3_,1);
      plVar6 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      local_60 = plVar6;
      local_58 = CONCAT31(local_58._1_3_,1);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_60 = local_40;
    local_58 = CONCAT31(local_58._1_3_,1);
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00018750();
  if (plVar6 == (int64_t *)0x0) {
LAB_000b6d1f:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_000b6d1f;
  }
  plVar2 = *pplVar7;
  cVar5 = *(char *)(pplVar7 + 1);
  if ((cVar5 == '\0') || (plVar2 == (int64_t *)0x0)) {
    if (plVar2 == (int64_t *)0x0) {
      bVar3 = true;
      *(void*)(this_ptr + 1) = 0;
      goto joined_r0x000b6e8a;
    }
  }
  else {
    FUN_00d50b00();
  }
  FUN_01f02570();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar2 + 0x5c8))();
  if (local_40 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x5c8))();
    FUN_00d8c7a0();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  bVar3 = false;
  *(void*)(this_ptr + 1) = 0;
joined_r0x000b6e8a:
  if ((cVar5 == '\0') && (!bVar3)) {
    FUN_00d50b00();
  }
  *this_ptr = (int64_t)plVar2;
  *(void*)(this_ptr + 1) = 1;
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

