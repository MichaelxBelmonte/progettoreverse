// Function: FUN_00451bd0
// Address: 00451bd0
// Size: 1894 bytes
// Class: MDMetaWindowController
// String references:
//   "%s%d-%d"
//   "%s%d"


undefined8 FUN_00451bd0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  uint *puVar9;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  bool bVar10;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  uint local_58 [2];
  undefined2 *local_50;
  int local_48;
  int local_44;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined1 local_39;
  char local_38 [8];
  
  pVar8 = (pthread_key_t)param_1;
  if (*param_2 == 0) {
LAB_00452217:
    FUN_00452640();
  }
  else {
    local_39 = 0;
    local_3a = 0;
    local_3c = 0x2021;
    if (*(char *)(unaff_RSI + 0x249) == '\0') {
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012407c0();
      lVar1 = *param_2;
      local_58[0] = local_58[0] & 0xffffff00;
      cVar3 = FUN_00d23d70();
      if (((char)local_58[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        bVar10 = false;
      }
      else {
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012407c0();
        FUN_00d23310();
        param_1 = CONCAT71((int7)((ulonglong)param_1 >> 8),(char)local_58[0]);
        puVar9 = (uint *)local_38;
        if ((char)local_58[0] != '\0') {
          puVar9 = local_58;
        }
        local_38[0] = (char)local_58[0];
        *(undefined1 *)puVar9 = 0;
        if (((char)local_58[0] != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        bVar10 = lVar1 == *param_2;
        if ((local_38[0] != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = DAT_02705ed8;
      if (bVar10) {
        if (DAT_02705ed8 != 0) {
          FUN_00d50b00();
        }
        lVar2 = DAT_02705f08;
        if (DAT_02705f08 != 0) {
          FUN_00d50b00();
        }
        local_110 = lVar2;
        local_108 = '\x01';
        local_100 = 0;
        local_f8 = '\0';
        FUN_00d31230(&local_100,&local_110);
        if ((local_f8 != '\0') && (local_100 != 0)) {
          FUN_00d50b20();
        }
        if ((local_108 != '\0') && (local_110 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 == 0) {
          return unaff_RDI;
        }
        FUN_00d50b20();
        return unaff_RDI;
      }
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01240660();
      lVar1 = *param_2;
      local_58[0] = local_58[0] & 0xffffff00;
      cVar3 = FUN_00d23d70();
      if (((char)local_58[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      pVar8 = (pthread_key_t)param_1;
      if (cVar3 == '\0') {
        bVar10 = false;
      }
      else {
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01240660();
        FUN_00d23310();
        pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),(char)local_58[0]);
        puVar9 = (uint *)local_38;
        if ((char)local_58[0] != '\0') {
          puVar9 = local_58;
        }
        local_38[0] = (char)local_58[0];
        *(undefined1 *)puVar9 = 0;
        if (((char)local_58[0] != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        bVar10 = lVar1 == *param_2;
        if ((local_38[0] != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = DAT_02705ed8;
      if (bVar10) {
        if (DAT_02705ed8 != 0) {
          FUN_00d50b00();
        }
        lVar2 = DAT_02705f18;
        local_f0 = lVar1;
        local_e8 = '\x01';
        if (DAT_02705f18 != 0) {
          FUN_00d50b00();
        }
        local_e0 = lVar2;
        local_d8 = '\x01';
        local_d0 = 0;
        local_c8 = '\0';
        FUN_00d31230(&local_d0,&local_e0);
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if (local_e8 == '\0') {
          return unaff_RDI;
        }
        if (local_f0 == 0) {
          return unaff_RDI;
        }
        FUN_00d50b20();
        return unaff_RDI;
      }
    }
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_0124a860();
    if (iVar4 == 2) {
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_c0 = *param_2;
      local_b8 = '\0';
      iVar4 = FUN_01240ab0();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_b0 = *param_2;
      local_a8 = '\0';
      iVar5 = FUN_01240ab0();
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      iVar6 = FUN_00451aa0();
      if ((iVar4 < iVar6) && (iVar6 = FUN_00451aa0(), iVar5 < iVar6)) {
        local_50 = (undefined2 *)&local_39;
      }
      else {
        local_50 = &local_3c;
      }
      local_44 = iVar5 + 1;
      local_58[0] = 3;
    }
    else {
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_0124a860();
      if (iVar4 != 1) goto LAB_00452217;
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_a0 = *param_2;
      local_98 = '\0';
      iVar4 = FUN_01240ab0();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      iVar5 = FUN_00451aa0();
      local_50 = &local_3c;
      if (iVar4 < iVar5) {
        local_50 = (undefined2 *)&local_39;
      }
      local_58[0] = 2;
    }
    local_48 = iVar4 + 1;
    FUN_00d8cb40();
  }
  return unaff_RDI;
}


