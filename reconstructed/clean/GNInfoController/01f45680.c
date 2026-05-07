// Function: FUN_01f45680
// Address: 01f45680
// Size: 555 bytes
// Class: GNInfoController
// String references:
//   "GNInfoController"

void FUN_01f45680(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t **pplVar7;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar3 = g_02725a20;
  lVar6 = *(int64_t *)(arg1 + 0x58);
  if (lVar6 != 0) goto LAB_01f457d4;
  if (g_02725a20 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar3;
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  local_40 = 0;
  local_38 = '\0';
  pplVar7 = &local_70;
  FUN_01e4fcf0(&local_40,&local_50);
  plVar2 = local_70;
  if ((g_0270fbd0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026eddd8 = FUN_00015ff0();
    g_026eddc0 = "GNInfoController";
    g_026eddc8 = 0xa8;
    g_026eddd0 = FUN_001d1e30;
    g_026edde0 = 0;
    ram_00000000026edde8 = 0;
    g_026eddf0 = 0;
    ram_00000000026eddf8 = 0;
    g_026ede00 = 0;
    ram_00000000026ede08 = 0;
    g_026ede10 = 0;
    ram_00000000026ede18 = 0;
    g_026ede20 = 0;
    ram_00000000026ede28 = 0;
    g_026ede30 = 0;
    ram_00000000026ede38 = 0;
    g_026ede40 = 0;
    ram_00000000026ede48 = 0;
    g_026ede50 = 0;
    ram_00000000026ede58 = 0;
    g_026ede60 = 0;
    ram_00000000026ede68 = 0;
    g_026ede70 = 0;
    ram_00000000026ede78 = 0;
    g_026ede80 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_01f45727:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01f45727;
  }
  plVar1 = *(int64_t **)(arg1 + 0x58);
  plVar2 = *pplVar7;
  if (plVar1 != plVar2) {
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar2 == (int64_t *)0x0) {
        *(void*)(arg1 + 0x58) = 0;
      }
      else {
        FUN_00d50b00();
        plVar1 = *(int64_t **)(arg1 + 0x58);
        *(int64_t **)(arg1 + 0x58) = *pplVar7;
      }
    }
    else {
      *(void*)(pplVar7 + 1) = 0;
      *(int64_t **)(arg1 + 0x58) = plVar2;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = *(int64_t *)(arg1 + 0x58);
LAB_01f457d4:
  *(void*)(this_ptr + 1) = 0;
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}

