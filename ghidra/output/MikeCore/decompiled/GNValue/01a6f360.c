// Function: FUN_01a6f360
// Address: 01a6f360
// Size: 2162 bytes
// Class: GNValue
// String references:
//   "GNValue"
//   "MUChord"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01a6f360(pthread_key_t param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  pthread_key_t pVar8;
  char *pcVar9;
  ulonglong uVar10;
  longlong *unaff_RDI;
  longlong **pplVar11;
  undefined4 uVar12;
  undefined1 local_d8 [4];
  int local_d4;
  undefined1 local_d0 [4];
  int local_cc;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  ulonglong local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar2 = (**(code **)(*unaff_RDI + 0xa78))();
  if (cVar2 != '\0') {
    FUN_01caeae0();
    plVar1 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01a6f3d3;
      }
    }
    else if (local_48 != (longlong *)0x0) {
LAB_01a6f3d3:
      local_70 = plVar1;
      uVar12 = FUN_01d66da0();
      local_c8 = DAT_027e2688;
      if (DAT_027e2688 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_c0 = '\x01';
      pplVar11 = &local_48;
      FUN_000175c0(uVar12,&local_c8);
      plVar1 = local_48;
      if ((DAT_02794b40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_02794a90 = FUN_00d4fe50();
        _DAT_02794a78 = "MUChord";
        _DAT_02794a80 = 0x20;
        param_1 = 0x1113770;
        _DAT_02794a88 = FUN_01113770;
        _DAT_02794a98 = 0;
        uRam0000000002794aa0 = 0;
        _DAT_02794aa8 = 0;
        _DAT_02794b20 = 0;
        uRam0000000002794b28 = 0;
        _DAT_02794b30 = 0;
        DAT_02794b32 = 2;
        _DAT_02794ab0 = 0;
        uRam0000000002794ab8 = 0;
        _DAT_02794ac0 = 0;
        uRam0000000002794ac8 = 0;
        _DAT_02794ad0 = 0;
        uRam0000000002794ad8 = 0;
        _DAT_02794ae0 = 0;
        uRam0000000002794ae8 = 0;
        _DAT_02794af0 = 0;
        uRam0000000002794af8 = 0;
        _DAT_02794b00 = 0;
        uRam0000000002794b08 = 0;
        _DAT_02794b10 = 0;
        uRam0000000002794b18 = 0;
        DAT_02794b3b = 0;
        _DAT_02794b33 = 0;
        ___cxa_guard_release();
      }
      if (plVar1 == (longlong *)0x0) {
LAB_01a6f45a:
        pplVar11 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_01a6f45a;
      }
      local_68 = *pplVar11;
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar11 + 1) = 0;
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      uVar12 = FUN_01d66da0();
      local_b8 = DAT_027e2690;
      if (DAT_027e2690 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_b0 = '\x01';
      pplVar11 = &local_48;
      FUN_000175c0(uVar12,&local_b8);
      plVar1 = local_48;
      if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026d4348 = FUN_00d4fe50();
        _DAT_026d4330 = "GNValue";
        _DAT_026d4338 = 0x18;
        param_1 = 0x53cb0;
        _DAT_026d4340 = FUN_00053cb0;
        _DAT_026d4350 = 0;
        uRam00000000026d4358 = 0;
        _DAT_026d4360 = 0;
        uRam00000000026d4368 = 0;
        _DAT_026d4370 = 0;
        uRam00000000026d4378 = 0;
        _DAT_026d4380 = 0;
        uRam00000000026d4388 = 0;
        _DAT_026d4390 = 0;
        uRam00000000026d4398 = 0;
        _DAT_026d43a0 = 0;
        uRam00000000026d43a8 = 0;
        _DAT_026d43b0 = 0;
        uRam00000000026d43b8 = 0;
        _DAT_026d43c0 = 0;
        uRam00000000026d43c8 = 0;
        _DAT_026d43d0 = 0;
        uRam00000000026d43d8 = 0;
        _DAT_026d43e0 = 0;
        uRam00000000026d43e8 = 0;
        _DAT_026d43f0 = 0;
        ___cxa_guard_release();
      }
      if (plVar1 == (longlong *)0x0) {
LAB_01a6f553:
        pplVar11 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_01a6f553;
      }
      local_60 = *pplVar11;
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar11 + 1) = 0;
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      uVar12 = FUN_01d66da0();
      local_a8 = DAT_027652e0;
      if (DAT_027652e0 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_a0 = '\x01';
      pplVar11 = &local_48;
      FUN_000175c0(uVar12,&local_a8);
      plVar1 = local_48;
      if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026d4348 = FUN_00d4fe50();
        _DAT_026d4330 = "GNValue";
        _DAT_026d4338 = 0x18;
        param_1 = 0x53cb0;
        _DAT_026d4340 = FUN_00053cb0;
        _DAT_026d4350 = 0;
        uRam00000000026d4358 = 0;
        _DAT_026d4360 = 0;
        uRam00000000026d4368 = 0;
        _DAT_026d4370 = 0;
        uRam00000000026d4378 = 0;
        _DAT_026d4380 = 0;
        uRam00000000026d4388 = 0;
        _DAT_026d4390 = 0;
        uRam00000000026d4398 = 0;
        _DAT_026d43a0 = 0;
        uRam00000000026d43a8 = 0;
        _DAT_026d43b0 = 0;
        uRam00000000026d43b8 = 0;
        _DAT_026d43c0 = 0;
        uRam00000000026d43c8 = 0;
        _DAT_026d43d0 = 0;
        uRam00000000026d43d8 = 0;
        _DAT_026d43e0 = 0;
        uRam00000000026d43e8 = 0;
        _DAT_026d43f0 = 0;
        ___cxa_guard_release();
      }
      if (plVar1 == (longlong *)0x0) {
LAB_01a6f641:
        pplVar11 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_01a6f641;
      }
      plVar1 = *pplVar11;
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar11 + 1) = 0;
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((((local_68 == (longlong *)0x0) || (local_60 == (longlong *)0x0)) ||
          (plVar1 == (longlong *)0x0)) || (param_2 == '\0')) {
        if (plVar1 != (longlong *)0x0) goto LAB_01a6f96a;
      }
      else {
        FUN_01a66e80();
        uVar10 = local_58;
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar6 = FUN_00dd6320();
        FUN_012521f0(uVar6,0,local_d8,local_d0);
        plVar1 = local_48;
        pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar6 >> 8),local_40[0]);
        pcVar9 = local_38;
        if (local_40[0] != '\0') {
          pcVar9 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar9 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        if ((local_50 != '\0') && (uVar10 != 0)) {
          FUN_00d50b20();
        }
        local_78 = plVar1;
        if (plVar1 == (longlong *)0x0) {
LAB_01a6f858:
          (**(code **)(*unaff_RDI + 0xa48))();
          FUN_01a66e80();
          uVar10 = local_58;
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar6 = FUN_00dd6320();
          uVar7 = FUN_00dd6320();
          local_48 = local_68;
          local_40[0] = '\0';
          FUN_012502a0(uVar7,uVar6,(char)unaff_RDI[0x36]);
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (uVar10 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*unaff_RDI + 0xa50))();
          local_88 = local_68;
          local_80 = '\0';
          uVar6 = FUN_00dd6320();
          uVar7 = FUN_00dd6320();
          (**(code **)(*unaff_RDI + 0xa80))(uVar7,uVar6);
          if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_78 == (longlong *)0x0) goto LAB_01a6f96a;
        }
        else {
          local_98 = local_68;
          local_90 = '\0';
          cVar2 = (**(code **)(*plVar1 + 0x50))();
          bVar3 = 1;
          if ((((cVar2 != '\0') && (local_48 = (longlong *)FUN_00dd6320(), local_d4 != 0)) &&
              ((ulonglong)local_48 >> 0x20 != 0)) &&
             (((cVar2 = FUN_00e7c000(), cVar2 != '\0' && (local_58 = FUN_00dd6320(), local_cc != 0))
              && (local_58 >> 0x20 != 0)))) {
            bVar3 = FUN_00e7c000();
            bVar3 = bVar3 ^ 1;
          }
          if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar3 != 0) goto LAB_01a6f858;
        }
        FUN_00d50b20();
LAB_01a6f96a:
        FUN_00d50b20();
      }
      plVar1 = local_68;
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      uVar10 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
      FUN_00d50b20();
      goto LAB_01a6f99c;
    }
  }
  uVar10 = 0;
LAB_01a6f99c:
  return uVar10 & 0xffffffff;
}


