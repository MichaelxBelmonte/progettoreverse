// Function: FUN_01b91920
// Address: 01b91920
// Size: 1487 bytes
// Class: MUScaleModeSequence


ulonglong * FUN_01b91920(pthread_key_t param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  char *pcVar11;
  longlong *unaff_RSI;
  ulonglong *unaff_RDI;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  ulonglong local_88;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  ulonglong local_70;
  undefined8 local_68;
  ulonglong local_58;
  char local_50;
  char local_41;
  ulonglong local_40;
  char local_38 [8];
  
  local_68 = param_2;
  FUN_01b920e0();
  uVar3 = local_58;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
    param_2 = local_68;
  }
  FUN_012521f0(param_2,0,&local_88,&local_70);
  uVar4 = local_40;
  pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_2 >> 8),local_38[0]);
  pcVar11 = &local_80;
  if (local_38[0] != '\0') {
    pcVar11 = local_38;
  }
  local_80 = local_38[0];
  *pcVar11 = '\0';
  if ((local_38[0] != '\0') && (uVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 == '\0') && (uVar4 != 0)) {
    FUN_00d50b00();
  }
  if ((local_50 != '\0') && (uVar3 != 0)) {
    FUN_00d50b20();
  }
  if (uVar4 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  FUN_01b91500();
  if (local_40 != 0) {
    FUN_01b91500();
    uVar3 = local_58;
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar6 = FUN_0173f250();
    if ((local_50 != '\0') && (uVar3 != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (cVar6 != '\0') goto LAB_01b91ad5;
LAB_01b91bd9:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    goto LAB_01b91be8;
  }
LAB_01b91ad5:
  local_40 = local_68;
  FUN_00e7b970();
  local_a0 = local_40;
  local_40 = local_70;
  FUN_00e7b970();
  local_98 = local_40;
  local_40 = local_40 & 0xffffffff00000000;
  if (local_a0._4_4_ == 0) {
    iVar2 = (int)(local_98 >> 0x20);
  }
  else {
    cVar6 = FUN_00e7c650();
    if (cVar6 == '\0') goto LAB_01b91bd9;
    iVar2 = local_98._4_4_;
  }
  if (iVar2 != 0) {
    local_58 = local_58 & 0xffffffff00000000;
    cVar6 = FUN_00e7c650();
    if (cVar6 == '\0') goto LAB_01b91bd9;
  }
  local_50 = '\0';
  local_58 = 0;
  local_90 = local_88;
  local_a8 = local_70;
  FUN_01b920e0();
  uVar3 = local_40;
  pvVar7 = _pthread_getspecific(pVar8);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar9 = &local_90;
  local_41 = FUN_01253c10(puVar9,&local_58,&local_a8,0);
  pVar8 = (pthread_key_t)puVar9;
  if ((local_38[0] != '\0') && (uVar3 != 0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar8);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  uVar5 = local_40;
  cVar6 = local_50;
  uVar3 = local_58;
  if (local_58 == local_40) {
    if ((local_50 == '\0') && (local_40 != 0)) {
      if (local_38[0] != '\0') goto LAB_01b91cbb;
      FUN_00d50b00();
      goto LAB_01b91cee;
    }
LAB_01b91cf2:
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38[0] == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      local_58 = uVar5;
      if ((cVar6 != '\0') && (uVar3 != 0)) {
        FUN_00d50b20();
      }
LAB_01b91cee:
      local_50 = '\x01';
      goto LAB_01b91cf2;
    }
    local_58 = local_40;
    if ((local_50 != '\0') && (uVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_01b91cbb:
    local_50 = '\x01';
  }
  if (local_41 != '\0') {
    local_70 = local_90;
  }
  if (local_58 == 0) {
LAB_01b91e86:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    (**(code **)(*unaff_RSI + 0xa48))();
    FUN_01b920e0();
    lVar1 = CONCAT71(uStack_7f,local_80);
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38[0] = '\0';
    uVar10 = local_68;
    local_40 = uVar4;
    FUN_012502a0(local_68,local_88,(char)unaff_RSI[0x36]);
    pVar8 = (pthread_key_t)uVar10;
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    FUN_01b920e0();
    lVar1 = CONCAT71(uStack_7f,local_80);
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = local_58;
    local_38[0] = '\0';
    FUN_012502a0(local_70,local_68,(char)unaff_RSI[0x36]);
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RSI + 0xa50))();
    uVar3 = local_58;
    if ((char)unaff_RSI[0x42] != '\0') {
      FUN_01b92310();
      FUN_01b92310();
      goto LAB_01b91e86;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = uVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      *unaff_RDI = local_58;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      local_50 = '\0';
    }
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_01b91be8:
  FUN_00d50b20();
  return unaff_RDI;
}


