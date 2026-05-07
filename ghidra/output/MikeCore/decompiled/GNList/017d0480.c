// Function: FUN_017d0480
// Address: 017d0480
// Size: 1173 bytes
// Class: GNList
// String references:
//   "GNList"


/* WARNING: Removing unreachable block (ram,0x017d075f) */
/* WARNING: Removing unreachable block (ram,0x017d076b) */
/* WARNING: Removing unreachable block (ram,0x017d0809) */
/* WARNING: Removing unreachable block (ram,0x017d0815) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_017d0480(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong **pplVar9;
  undefined4 uVar10;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  int local_48;
  int iStack_44;
  int local_40;
  longlong *local_38;
  
  plVar1 = *(longlong **)(unaff_RSI + 0x58);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(param_1);
  plVar2 = plVar1;
  lVar8 = DAT_027d3978;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar8 = DAT_027d3978, lVar6 != 0)) {
    plVar2 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  DAT_027d3978 = lVar8;
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar2 + 0x88))();
  plVar2 = local_60;
  if ((DAT_027048b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  pplVar9 = (longlong **)&DAT_02802688;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') {
      FUN_011b7780();
      cVar3 = FUN_00e8da30();
      pplVar9 = &local_60;
      if (cVar3 == '\0') {
        pplVar9 = (longlong **)&DAT_02802688;
      }
    }
  }
  local_38 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  lVar8 = DAT_027d3980;
  if (local_38 != (longlong *)0x0) {
    if (DAT_027d3980 != 0) {
      FUN_00d50b00();
    }
    FUN_00d242c0();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &DAT_02572358;
    (*DAT_02572370)();
    local_58 = 0;
    local_60 = (longlong *)0x0;
    local_50 = local_38;
    local_48 = -1;
    iStack_44 = 0;
    local_40 = 0;
    while( true ) {
      if (iStack_44 != 0) {
        if (iStack_44 < 1) {
          iStack_44 = -iStack_44;
        }
        else {
          local_48 = local_48 - iStack_44;
          FUN_00d23690();
          local_40 = local_40 + iStack_44;
          iStack_44 = 0;
        }
      }
      lVar8 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((longlong)local_50 + 0xc) <= local_48) break;
      local_60 = *(longlong **)(local_50[2] + 8 + lVar8 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)local_50[2]);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01820e20();
      lVar8 = local_70;
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_00d21140();
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar10 = FUN_01894e00();
    local_80 = DAT_027d64a0;
    if (0 < *(int *)((longlong)puVar7 + 0xc)) {
      if (DAT_027d64a0 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_78 = '\x01';
      FUN_00d95130(uVar10,&local_80);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d50b20();
      return unaff_RDI;
    }
    FUN_00d50b20();
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}


