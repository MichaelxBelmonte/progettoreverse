// Function: FUN_00d56b80
// Address: 00d56b80
// Size: 1552 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNObject"


/* WARNING: Removing unreachable block (ram,0x00d56eca) */
/* WARNING: Removing unreachable block (ram,0x00d56eda) */
/* WARNING: Removing unreachable block (ram,0x00d56d57) */
/* WARNING: Removing unreachable block (ram,0x00d56d63) */
/* WARNING: Removing unreachable block (ram,0x00d56f66) */
/* WARNING: Removing unreachable block (ram,0x00d56f72) */
/* WARNING: Removing unreachable block (ram,0x00d56dfb) */
/* WARNING: Removing unreachable block (ram,0x00d56e0b) */
/* WARNING: Removing unreachable block (ram,0x00d56e57) */
/* WARNING: Removing unreachable block (ram,0x00d56e80) */
/* WARNING: Removing unreachable block (ram,0x00d56e59) */
/* WARNING: Removing unreachable block (ram,0x00d56e82) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00d56b80(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong **pplVar4;
  int iVar5;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar6;
  undefined4 uVar7;
  longlong *local_90;
  char local_88;
  int local_78;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  lVar3 = DAT_0277cf68;
  plVar6 = (longlong *)*unaff_RSI;
  if (DAT_0277cf68 != 0) {
    FUN_00e31530(param_1,0);
  }
  cVar1 = (**(code **)(*plVar6 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    uVar7 = FUN_00d46530();
    plVar6 = local_58;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00e31530(uVar7,0);
        *unaff_RDI = plVar6;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (local_50 == '\0') {
          return unaff_RDI;
        }
        if (local_58 == (longlong *)0x0) {
          return unaff_RDI;
        }
        FUN_00d50b20();
        return unaff_RDI;
      }
      local_58 = (longlong *)0x0;
    }
    *unaff_RDI = local_58;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  puVar2 = (undefined8 *)FUN_00e8fc40();
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &DAT_02578b00;
  (*DAT_02578b18)();
  uVar7 = FUN_00d7a0f0(0,0);
  if (*param_2 != 0) {
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar5 = 0;
    local_48 = *param_2;
    while( true ) {
      if (iVar5 != 0) {
        if (iVar5 < 1) {
          iVar5 = -iVar5;
        }
        else {
          local_40 = CONCAT44(local_40._4_4_,(int)local_40 - iVar5);
          FUN_00d23690(uVar7,iVar5);
          local_38 = local_38 + iVar5;
          iVar5 = 0;
        }
        local_40 = CONCAT44(iVar5,(int)local_40);
      }
      lVar3 = (longlong)(int)local_40;
      iVar5 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar5);
      if (*(int *)(local_48 + 0xc) <= iVar5) break;
      local_58 = *(longlong **)(*(longlong *)(local_48 + 0x10) + 8 + lVar3 * 8);
      uVar7 = (**(code **)(*local_58 + 0x88))();
      if (local_88 == '\0') {
        if (local_90 == (longlong *)0x0) {
          local_68 = (longlong *)0x0;
        }
        else {
          uVar7 = FUN_00e31530();
          local_68 = local_90;
        }
      }
      else {
        local_68 = local_90;
        local_88 = '\0';
      }
      plVar6 = local_68;
      local_60 = '\x01';
      if (local_68 != (longlong *)0x0) {
        if ((DAT_027048b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          if ((DAT_028a7d98 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
            DAT_028a7cd0 = "GNObject";
            _DAT_028a7cd8 = 0x10;
            _DAT_028a7ce0 = FUN_00d4ff10;
            _DAT_028a7ce8 = 0;
            uRam00000000028a7cf0 = 0;
            _DAT_028a7cf8 = 0;
            uRam00000000028a7d00 = 0;
            _DAT_028a7d08 = 0;
            uRam00000000028a7d10 = 0;
            _DAT_028a7d18 = 0;
            uRam00000000028a7d20 = 0;
            _DAT_028a7d28 = 0;
            uRam00000000028a7d30 = 0;
            _DAT_028a7d38 = 0;
            uRam00000000028a7d40 = 0;
            _DAT_028a7d48 = 0;
            uRam00000000028a7d50 = 0;
            _DAT_028a7d58 = 0;
            uRam00000000028a7d60 = 0;
            _DAT_028a7d68 = 0;
            uRam00000000028a7d70 = 0;
            _DAT_028a7d78 = 0;
            uRam00000000028a7d80 = 0;
            _DAT_028a7d84 = 0;
            uRam00000000028a7d88 = 0;
            uRam00000000028a7d8c = 0;
            ___cxa_guard_release();
          }
          DAT_026cd460 = "GNList";
          _DAT_026cd468 = 0x20;
          _DAT_026cd470 = FUN_00018210;
          _DAT_026cd478 = &DAT_028a7cd0;
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
        (**(code **)(*plVar6 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar4 = &local_68;
        if (cVar1 == '\0') {
          pplVar4 = (longlong **)&DAT_02802688;
        }
        plVar6 = *pplVar4;
        cVar1 = *(char *)(pplVar4 + 1);
        if ((cVar1 == '\0') || (plVar6 == (longlong *)0x0)) {
          if (plVar6 == (longlong *)0x0) {
            uVar7 = FUN_00d7a410();
            goto LAB_00d56f08;
          }
        }
        else {
          FUN_00e31530();
        }
        local_88 = '\0';
        local_90 = (longlong *)0x0;
        local_78 = -1;
        while( true ) {
          lVar3 = (longlong)local_78;
          local_78 = local_78 + 1;
          if (*(int *)((longlong)plVar6 + 0xc) <= local_78) break;
          local_90 = *(longlong **)(plVar6[2] + 8 + lVar3 * 8);
          FUN_00d7a410();
        }
        uVar7 = FUN_00083b20();
        if (cVar1 != '\0') {
          uVar7 = FUN_00d50b20();
        }
      }
LAB_00d56f08:
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        uVar7 = FUN_00d50b20();
      }
      iVar5 = local_40._4_4_;
    }
    FUN_00083b20();
  }
  iVar5 = FUN_00c8d620();
  if (iVar5 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    uVar7 = FUN_00cb1e70();
    plVar6 = local_58;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00e31530(uVar7,0);
        *unaff_RDI = plVar6;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00d57173;
      }
      plVar6 = (longlong *)0x0;
    }
    *unaff_RDI = plVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
LAB_00d57173:
  FUN_00d50b20();
  return unaff_RDI;
}


