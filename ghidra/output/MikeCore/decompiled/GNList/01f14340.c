// Function: FUN_01f14340
// Address: 01f14340
// Size: 1191 bytes
// Class: GNList
// String references:
//   "GNList"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01f14340(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong **pplVar6;
  int iVar7;
  undefined8 *unaff_RDI;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  undefined8 local_78;
  int local_70;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_0004b090();
  uVar9 = (**(code **)(*plVar3 + 0x18))();
  local_d0 = *param_1;
  local_c8 = '\0';
  FUN_01ca7bd0(uVar9,&local_d0);
  lVar5 = local_90;
  if (local_88 == '\0') {
    if (((local_90 != 0) && (FUN_00d50b00(), local_88 != '\0')) && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_88 = '\0';
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_02572358;
    uVar9 = (*DAT_02572370)();
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_88 = '\0';
    local_90 = 0;
    local_80 = lVar5;
    local_78 = 0xffffffff;
    local_70 = 0;
    iVar7 = 0;
    while( true ) {
      if (iVar7 != 0) {
        if (iVar7 < 1) {
          iVar7 = -iVar7;
        }
        else {
          local_78 = CONCAT44(local_78._4_4_,(int)local_78 - iVar7);
          FUN_00d23690(uVar9,iVar7);
          local_70 = local_70 + iVar7;
          iVar7 = 0;
        }
        local_78 = CONCAT44(iVar7,(int)local_78);
      }
      lVar5 = (longlong)(int)local_78;
      iVar7 = (int)local_78 + 1;
      local_78 = CONCAT44(local_78._4_4_,iVar7);
      if (*(int *)(local_80 + 0xc) <= iVar7) break;
      local_c0 = *(longlong *)(*(longlong *)(local_80 + 0x10) + 8 + lVar5 * 8);
      local_b8 = '\0';
      local_90 = local_c0;
      uVar9 = (**(code **)(*plVar3 + 0x5f8))(*(longlong *)(local_80 + 0x10),&local_c0);
      plVar1 = local_48;
      cVar2 = local_50;
      plVar8 = local_58;
      if (local_58 == local_48) {
        if ((local_50 != '\0') || (local_48 == (longlong *)0x0)) goto LAB_01f1458a;
        if (local_40 == '\0') {
          uVar9 = FUN_00d50b00();
          local_50 = '\x01';
          if (local_40 == '\0') goto LAB_01f1459e;
          goto LAB_01f14590;
        }
        local_50 = '\x01';
        local_40 = '\0';
      }
      else {
        if (local_40 != '\0') {
          local_58 = local_48;
          if ((local_50 != '\0') && (plVar8 != (longlong *)0x0)) {
            uVar9 = FUN_00d50b20();
          }
          local_50 = '\x01';
          local_40 = '\0';
          plVar8 = plVar1;
          goto LAB_01f1459e;
        }
        if (local_48 != (longlong *)0x0) {
          uVar9 = FUN_00d50b00();
        }
        local_58 = plVar1;
        if ((cVar2 != '\0') && (plVar8 != (longlong *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        local_50 = '\x01';
        plVar8 = plVar1;
LAB_01f1458a:
        if (local_40 != '\0') {
LAB_01f14590:
          if (local_48 != (longlong *)0x0) {
            uVar9 = FUN_00d50b20();
          }
        }
      }
LAB_01f1459e:
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        uVar9 = FUN_00d50b20();
      }
      if (plVar8 != (longlong *)0x0) {
        if ((DAT_027048b0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
          _DAT_026cd478 = FUN_00d4fe50();
          DAT_026cd460 = "GNList";
          _DAT_026cd468 = 0x20;
          _DAT_026cd470 = FUN_00018210;
          _DAT_026cd480 = 0;
          uRam00000000026cd488 = 0;
          _DAT_026cd490 = 0;
          _DAT_026cd508 = 0;
          uRam00000000026cd510 = 0;
          _DAT_026cd518 = 0;
          DAT_026cd51a = 6;
          _DAT_026cd498 = 0;
          uRam00000000026cd4a0 = 0;
          _DAT_026cd4a8 = 0;
          uRam00000000026cd4b0 = 0;
          _DAT_026cd4b8 = 0;
          uRam00000000026cd4c0 = 0;
          _DAT_026cd4c8 = 0;
          uRam00000000026cd4d0 = 0;
          _DAT_026cd4d8 = 0;
          uRam00000000026cd4e0 = 0;
          _DAT_026cd4e8 = 0;
          uRam00000000026cd4f0 = 0;
          _DAT_026cd4f8 = 0;
          uRam00000000026cd500 = 0;
          DAT_026cd523 = 0;
          _DAT_026cd51b = 0;
          ___cxa_guard_release();
        }
        (**(code **)(*plVar8 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar6 = &local_58;
        if (cVar2 == '\0') {
          pplVar6 = (longlong **)&DAT_02802688;
        }
        plVar8 = *pplVar6;
        cVar2 = *(char *)(pplVar6 + 1);
        if ((cVar2 == '\0') || (plVar8 == (longlong *)0x0)) {
          uVar9 = extraout_XMM0_Da;
          if (plVar8 == (longlong *)0x0) {
            local_a0 = local_58;
            local_98 = '\0';
            uVar9 = FUN_00d21140();
            if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
              uVar9 = FUN_00d50b20();
            }
            goto LAB_01f14460;
          }
        }
        else {
          uVar9 = FUN_00d50b00();
        }
        local_40 = '\0';
        local_48 = plVar8;
        uVar9 = FUN_00d214d0(uVar9,*(undefined4 *)((longlong)puVar4 + 0xc));
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          uVar9 = FUN_00d50b20();
        }
      }
LAB_01f14460:
      iVar7 = local_78._4_4_;
    }
    FUN_01f14d50();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return unaff_RDI;
}


