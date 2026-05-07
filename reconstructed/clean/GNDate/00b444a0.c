// Function: FUN_00b444a0
// Address: 00b444a0
// Size: 2083 bytes
// Class: GNDate
// String references:
//   "GNDate"

void FUN_00b444a0(double param_1,int param_2,uint32_t param_3,int64_t *param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int in_ECX;
  ulong uVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t **pplVar7;
  uint32_t uVar8;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  uint32_t local_6c;
  double local_68;
  uint32_t local_60;
  uint32_t uStack_5c;
  char local_58;
  int64_t *local_50;
  int local_44;
  int64_t *local_40;
  char local_38;
  
  uVar8 = SUB84(param_1,0);
  *(void*)(this_ptr + 0x78) = 0;
  lVar2 = g_027dc910;
  local_6c = param_3;
  local_68 = param_1;
  local_44 = param_2;
  if (*param_4 == 0) goto LAB_00b445f1;
  if (g_027dc910 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_100 = lVar2;
  local_f8 = '\x01';
  pplVar7 = &local_40;
  FUN_000175c0(uVar8,&local_100);
  plVar5 = local_40;
  if ((g_026d02f0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026d0240 = FUN_00d4fe50();
    g_026d0228 = "GNDate";
    g_026d0230 = 0x18;
    g_026d0238 = FUN_000378e0;
    g_026d0248 = 0;
    ram_00000000026d0250 = 0;
    g_026d0258 = 0;
    ram_00000000026d0260 = 0;
    g_026d0268 = 0;
    ram_00000000026d0270 = 0;
    g_026d0278 = 0;
    ram_00000000026d0280 = 0;
    g_026d0288 = 0;
    ram_00000000026d0290 = 0;
    g_026d0298 = 0;
    ram_00000000026d02a0 = 0;
    g_026d02a8 = 0;
    ram_00000000026d02b0 = 0;
    g_026d02b8 = 0;
    ram_00000000026d02c0 = 0;
    g_026d02c8 = 0;
    ram_00000000026d02d0 = 0;
    g_026d02d8 = 0;
    ram_00000000026d02e0 = 0;
    g_026d02e8 = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (int64_t *)0x0) {
LAB_00b44556:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00b44556;
  }
  plVar1 = *(int64_t **)(this_ptr + 0x80);
  plVar5 = *pplVar7;
  if (plVar1 != plVar5) {
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar5 == (int64_t *)0x0) {
        *(void*)(this_ptr + 0x80) = 0;
      }
      else {
        FUN_00d50b00();
        plVar1 = *(int64_t **)(this_ptr + 0x80);
        *(int64_t **)(this_ptr + 0x80) = *pplVar7;
      }
    }
    else {
      *(void*)(pplVar7 + 1) = 0;
      *(int64_t **)(this_ptr + 0x80) = plVar5;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
LAB_00b445f1:
  FUN_00bb9440();
  plVar5 = local_40;
  uVar8 = local_6c;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_50 = plVar5;
  FUN_00d46530();
  plVar5 = (int64_t *)CONCAT44(uStack_5c,local_60);
  if (local_58 == '\0') {
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_38 = '\0';
  local_40 = plVar5;
  cVar3 = FUN_00d23d70();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (CONCAT44(uStack_5c,local_60) != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_02764880;
  if (cVar3 == '\0') {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_f0 = lVar2;
    local_e8 = '\x01';
    FUN_00cc78b0();
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = g_02764880;
  if (local_44 != 9) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar2;
    local_d8 = '\x01';
    FUN_00cc78b0();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = g_02764880;
  if (1 < in_ECX - 1U) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar2;
    local_c8 = '\x01';
    FUN_00cc78b0();
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
  }
  local_c0 = *arg1;
  local_b8 = '\0';
  local_b0 = *param_4;
  local_a8 = '\0';
  FUN_00bba180(SUB84(local_68,0),local_44,uVar8,&local_b0);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccce80();
  *(int *)(this_ptr + 0x90) = (int)(int64_t)local_68;
  uVar6 = *(int *)(this_ptr + 0x34) - 0x40;
  if (uVar6 < 3) {
    *(short *)(this_ptr + 0xa0) = (short)uVar6 * 8 + 0x10;
  }
  FUN_00ae7f20();
  FUN_00c8e690();
  plVar5 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  plVar1 = *(int64_t **)(this_ptr + 0x60);
  if (plVar1 == plVar5) {
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t **)(this_ptr + 0x60) = plVar5;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  plVar5 = local_40;
  if (((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  plVar1 = *(int64_t **)(this_ptr + 0x68);
  if (plVar1 == plVar5) {
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t **)(this_ptr + 0x68) = plVar5;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar5 = operator_new(uVar6);
  FUN_00c67e70();
  *(int64_t **)(this_ptr + 0x78) = plVar5;
  *(void*)((int64_t)plVar5 + 0x205c) = 0x1000;
  (**(code **)(*plVar5 + 0x20))();
  local_60 = FUN_00c6a340();
  FUN_00c8e690();
  plVar5 = local_40;
  if (((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  uVar8 = FUN_00c92170();
  plVar1 = *(int64_t **)(this_ptr + 0x98);
  if (plVar1 == plVar5) {
    if (plVar5 != (int64_t *)0x0) {
      uVar8 = FUN_00d50b20();
    }
  }
  else {
    *(int64_t **)(this_ptr + 0x98) = plVar5;
    if (plVar1 != (int64_t *)0x0) {
      uVar8 = FUN_00d50b20();
    }
  }
  FUN_00c6a360(uVar8,&local_60);
  FUN_00c8e690();
  plVar5 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  uVar8 = ___bzero();
  local_a0 = plVar5;
  local_98 = '\0';
  uVar8 = FUN_00ccdbb0(uVar8,&local_a0);
  plVar5 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = g_027653a0;
  if (plVar5 != (int64_t *)0x0) {
    if (g_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar2;
    local_88 = '\x01';
    uVar8 = FUN_00cc78b0();
    if ((local_88 != '\0') && (local_90 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x390))(uVar8,this_ptr + 0x40);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_02765700;
  if (local_40 != (int64_t *)0x0) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar2;
    local_78 = '\x01';
    FUN_00cc78b0();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

