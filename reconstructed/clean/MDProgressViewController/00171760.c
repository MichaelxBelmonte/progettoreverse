// Function: FUN_00171760
// Address: 00171760
// Size: 596 bytes
// Class: MDProgressViewController
// String references:
//   "MDProgressViewController"

void FUN_00171760(uint32_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t *in_RDX;
  int64_t **pplVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar2 = g_026e4040;
  if (g_026e4040 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_60 = 0;
  local_58 = '\0';
  pplVar6 = &local_40;
  FUN_01e51a60(param_1,&local_60);
  plVar1 = local_40;
  if ((g_02710940 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026e4068 = FUN_00015ff0();
    g_026e4050 = "MDProgressViewController";
    g_026e4058 = 0xa8;
    g_026e4060 = FUN_001734a0;
    g_026e4070 = 0;
    ram_00000000026e4078 = 0;
    g_026e4080 = 0;
    g_026e40f8 = 0;
    ram_00000000026e4100 = 0;
    g_026e4108 = 0;
    g_026e410a = 3;
    g_026e4088 = 0;
    ram_00000000026e4090 = 0;
    g_026e4098 = 0;
    ram_00000000026e40a0 = 0;
    g_026e40a8 = 0;
    ram_00000000026e40b0 = 0;
    g_026e40b8 = 0;
    ram_00000000026e40c0 = 0;
    g_026e40c8 = 0;
    ram_00000000026e40d0 = 0;
    g_026e40d8 = 0;
    ram_00000000026e40e0 = 0;
    g_026e40e8 = 0;
    ram_00000000026e40f0 = 0;
    g_026e4113 = 0;
    g_026e410b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_001717f4;
  }
  pplVar6 = (int64_t **)&g_02802688;
LAB_001717f4:
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01e53c20();
  plVar3 = local_40;
  (**(code **)(*(int64_t *)*arg1 + 0x4d8))();
  (**(code **)(*plVar3 + 0x4e8))(param_2);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar1[0x14] = *in_RDX;
  (**(code **)(*plVar1 + 0x5f0))();
  local_50 = *arg1;
  local_48 = '\0';
  (**(code **)(*plVar1 + 0x578))();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = (int64_t)plVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

