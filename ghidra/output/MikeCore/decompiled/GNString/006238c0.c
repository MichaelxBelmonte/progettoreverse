// Function: FUN_006238c0
// Address: 006238c0
// Size: 1249 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00623cb3) */
/* WARNING: Removing unreachable block (ram,0x00623cbc) */
/* WARNING: Removing unreachable block (ram,0x00623c3f) */
/* WARNING: Removing unreachable block (ram,0x00623c4b) */
/* WARNING: Removing unreachable block (ram,0x00623d98) */
/* WARNING: Removing unreachable block (ram,0x00623da1) */
/* WARNING: Removing unreachable block (ram,0x00623aff) */
/* WARNING: Removing unreachable block (ram,0x00623b0c) */
/* WARNING: Removing unreachable block (ram,0x00623915) */
/* WARNING: Removing unreachable block (ram,0x0062391e) */
/* WARNING: Removing unreachable block (ram,0x00623aab) */
/* WARNING: Removing unreachable block (ram,0x00623ab7) */
/* WARNING: Removing unreachable block (ram,0x00623b77) */
/* WARNING: Removing unreachable block (ram,0x00623ba0) */
/* WARNING: Removing unreachable block (ram,0x00623a27) */
/* WARNING: Removing unreachable block (ram,0x00623a50) */
/* WARNING: Removing unreachable block (ram,0x00623a29) */
/* WARNING: Removing unreachable block (ram,0x00623a52) */
/* WARNING: Removing unreachable block (ram,0x00623b79) */
/* WARNING: Removing unreachable block (ram,0x00623ba2) */

ulonglong FUN_006238c0(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  ulonglong uVar7;
  longlong *unaff_RDI;
  longlong *local_98;
  char local_90;
  longlong *local_68;
  char local_60;
  int local_50;
  longlong local_40;
  char local_38;
  longlong lVar6;
  
  plVar1 = local_68;
  (**(code **)(*unaff_RDI + 0x5d8))();
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00623923;
    }
  }
  else if (local_68 != (longlong *)0x0) {
LAB_00623923:
    FUN_006f4810();
    FUN_002eacb0();
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (*(int *)((longlong)local_68 + 0xc) == 0) {
      uVar7 = 0;
LAB_00623dad:
      FUN_00d50b20();
    }
    else {
      FUN_0063f230();
      if (local_68 == (longlong *)0x0) {
        uVar7 = 1;
      }
      else {
        FUN_0063f230();
        uVar2 = FUN_00212c70();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_60 != '\0') {
          FUN_00d50b20();
        }
        uVar7 = (ulonglong)uVar2 ^ 1;
        if ((char)uVar2 != '\0') goto LAB_00623dad;
      }
      if (param_2 == '\0') goto LAB_00623dad;
      local_50 = -1;
      while (local_50 = local_50 + 1, local_50 < *(int *)((longlong)local_68 + 0xc)) {
        FUN_006f3f00();
        FUN_00793930();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_000be170();
      local_68 = (longlong *)0x0;
      local_50 = -1;
      while( true ) {
        lVar3 = (longlong)local_50;
        local_50 = local_50 + 1;
        if (*(int *)((longlong)plVar1 + 0xc) <= local_50) break;
        lVar6 = *(longlong *)((longlong)plVar1 + 0x10);
        local_68 = *(longlong **)(lVar6 + 8 + lVar3 * 8);
        FUN_006f3f00();
        pVar5 = (pthread_key_t)lVar6;
        (**(code **)(*local_98 + 0x628))();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a7530();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_000be170();
      FUN_006f3f00();
      FUN_0074a910();
      FUN_006f4810();
      FUN_006f4810();
      FUN_01beea30();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*local_68 + 0x9d0))();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar7 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
      if (plVar1 != (longlong *)0x0) goto LAB_00623dad;
    }
    FUN_00d50b20();
    goto LAB_00623dbd;
  }
  uVar7 = 0;
LAB_00623dbd:
  return uVar7 & 0xffffffff;
}


