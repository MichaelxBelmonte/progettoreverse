// Function: FUN_01d83990
// Address: 01d83990
// Size: 1019 bytes
// Class: GNRootView
// String references:
//   "GNRootView"


/* WARNING: Removing unreachable block (ram,0x01d839d3) */
/* WARNING: Removing unreachable block (ram,0x01d83b96) */
/* WARNING: Removing unreachable block (ram,0x01d83ba0) */
/* WARNING: Removing unreachable block (ram,0x01d83bd3) */
/* WARNING: Removing unreachable block (ram,0x01d83d43) */
/* WARNING: Removing unreachable block (ram,0x01d83d4f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d83990(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *plVar9;
  longlong *local_50;
  char local_48;
  
  plVar9 = unaff_RDI;
  if (unaff_RDI == (longlong *)0x0) {
    bVar1 = false;
    cVar3 = '\0';
    lVar6 = 0;
    plVar7 = (longlong *)0x0;
  }
  else {
    FUN_00d50b00();
    bVar1 = false;
    plVar8 = (longlong *)0x0;
    do {
      if ((DAT_026e85e0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_027f4bd8 = FUN_0006d940();
        _DAT_027f4bc0 = "GNRootView";
        _DAT_027f4bc8 = 0x1d0;
        _DAT_027f4bd0 = FUN_00097da0;
        _DAT_027f4be0 = 0;
        uRam00000000027f4be8 = 0;
        _DAT_027f4bf0 = 0;
        uRam00000000027f4bf8 = 0;
        _DAT_027f4c00 = 0;
        uRam00000000027f4c08 = 0;
        _DAT_027f4c10 = 0;
        uRam00000000027f4c18 = 0;
        _DAT_027f4c20 = 0;
        uRam00000000027f4c28 = 0;
        _DAT_027f4c30 = 0;
        uRam00000000027f4c38 = 0;
        _DAT_027f4c40 = 0;
        uRam00000000027f4c48 = 0;
        _DAT_027f4c50 = 0;
        uRam00000000027f4c58 = 0;
        _DAT_027f4c60 = 0;
        uRam00000000027f4c68 = 0;
        _DAT_027f4c70 = 0;
        uRam00000000027f4c78 = 0;
        _DAT_027f4c80 = 0;
        ___cxa_guard_release();
      }
      (**(code **)(*plVar9 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar5 = (longlong *)&stack0xffffffffffffffa0;
      if (cVar3 == '\0') {
        plVar5 = &DAT_02802688;
      }
      lVar6 = *plVar5;
      plVar7 = plVar8;
      if (lVar6 != 0) {
        cVar3 = (char)plVar5[1];
        if (cVar3 != '\0') {
          FUN_00d50b00();
        }
        FUN_01d8c6e0();
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_50 == (longlong *)0x0) goto LAB_01d83ccb;
        FUN_01d8c6e0();
        if (plVar8 == local_50) {
          bVar2 = bVar1;
          if ((bVar1) || (plVar8 == (longlong *)0x0)) goto joined_r0x01d83afc;
          bVar2 = true;
          if (local_48 == '\0') {
            FUN_00d50b00();
            goto LAB_01d83b20;
          }
        }
        else if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          plVar7 = local_50;
          if ((bVar1) && (plVar8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01d83b20:
          plVar8 = plVar7;
          bVar2 = true;
joined_r0x01d83afc:
          plVar7 = plVar8;
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar2 = true;
          plVar7 = local_50;
          if ((bVar1) && (plVar8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar1 = bVar2;
        if (cVar3 != '\0') {
          FUN_00d50b20();
        }
      }
      (**(code **)(*plVar9 + 0x370))();
      if (local_50 == plVar9) {
LAB_01d83bda:
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar9 = local_50;
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          goto LAB_01d83bda;
        }
        FUN_00d50b20();
      }
      plVar8 = plVar7;
    } while (plVar9 != (longlong *)0x0);
    cVar3 = '\0';
    lVar6 = 0;
  }
LAB_01d83ccb:
  local_68 = 0;
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_78 = '\0';
  local_80 = plVar7;
  local_70 = unaff_RDI;
  FUN_01e57a30(&local_80,&local_70);
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar3 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


