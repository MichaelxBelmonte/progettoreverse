// Function: FUN_007035b0
// Address: 007035b0
// Size: 1147 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"


/* WARNING: Removing unreachable block (ram,0x00703647) */
/* WARNING: Removing unreachable block (ram,0x00703670) */
/* WARNING: Removing unreachable block (ram,0x00703649) */
/* WARNING: Removing unreachable block (ram,0x00703672) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_007035b0(void)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  void *pvVar9;
  pthread_key_t pVar10;
  longlong **pplVar11;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar12;
  int local_68;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  pcVar3 = DAT_02572370;
  (*DAT_02572370)();
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    local_68 = -1;
    while( true ) {
      lVar7 = (longlong)local_68;
      local_68 = local_68 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_68) break;
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8 + lVar7 * 8);
      local_40 = plVar2;
      if ((DAT_02700970 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        _DAT_026d78f8 = FUN_0006e710();
        _DAT_026d78e0 = "MDAudioTrackItem";
        _DAT_026d78e8 = 0x70;
        _DAT_026d78f0 = FUN_0006e6c0;
        _DAT_026d7900 = 0;
        uRam00000000026d7908 = 0;
        _DAT_026d7910 = 0;
        _DAT_026d7988 = 0;
        uRam00000000026d7990 = 0;
        _DAT_026d7998 = 0;
        DAT_026d799a = 1;
        _DAT_026d7918 = 0;
        uRam00000000026d7920 = 0;
        _DAT_026d7928 = 0;
        uRam00000000026d7930 = 0;
        _DAT_026d7938 = 0;
        uRam00000000026d7940 = 0;
        _DAT_026d7948 = 0;
        uRam00000000026d7950 = 0;
        _DAT_026d7958 = 0;
        uRam00000000026d7960 = 0;
        _DAT_026d7968 = 0;
        uRam00000000026d7970 = 0;
        _DAT_026d7978 = 0;
        uRam00000000026d7980 = 0;
        DAT_026d79a3 = 0;
        _DAT_026d799b = 0;
        ___cxa_guard_release();
      }
      pplVar11 = (longlong **)&DAT_02802688;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar11 = &local_40;
        if (cVar4 == '\0') {
          pplVar11 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar11 != (longlong *)0x0) {
        uVar12 = FUN_01bc0990();
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            uVar12 = FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_40 = local_50;
        local_38 = '\0';
        FUN_00d214d0(uVar12,*(undefined4 *)((longlong)puVar6 + 0xc));
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_0038d380();
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  (*pcVar3)();
  if (puVar6 == (undefined8 *)0x0) {
    *unaff_RDI = puVar8;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    if (0 < *(int *)((longlong)puVar6 + 0xc)) {
      iVar5 = 0;
      do {
        FUN_01bc60e0();
        plVar2 = local_40;
        FUN_000823a0();
        pplVar11 = (longlong **)&DAT_02802688;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar11 = &local_40;
          if (cVar4 == '\0') {
            pplVar11 = (longlong **)&DAT_02802688;
          }
        }
        plVar2 = *pplVar11;
        if (*(char *)(pplVar11 + 1) == '\0') {
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar11 + 1) = 0;
        }
        pVar10 = (pthread_key_t)pplVar11;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          pvVar9 = _pthread_getspecific(pVar10);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar12 = FUN_012e5ae0();
          if (local_48 == '\0') {
            if (local_50 != (longlong *)0x0) {
              uVar12 = FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_40 = local_50;
          local_38 = '\0';
          FUN_00d214d0(uVar12,*(undefined4 *)((longlong)puVar8 + 0xc));
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)((longlong)puVar6 + 0xc));
    }
    FUN_000840d0();
    *unaff_RDI = puVar8;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  return unaff_RDI;
}


