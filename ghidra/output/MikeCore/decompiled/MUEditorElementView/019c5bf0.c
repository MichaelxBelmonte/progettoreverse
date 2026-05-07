// Function: FUN_019c5bf0
// Address: 019c5bf0
// Size: 1625 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x019c6001) */
/* WARNING: Removing unreachable block (ram,0x019c6107) */
/* WARNING: Removing unreachable block (ram,0x019c6110) */
/* WARNING: Removing unreachable block (ram,0x019c5e79) */
/* WARNING: Removing unreachable block (ram,0x019c5e82) */
/* WARNING: Removing unreachable block (ram,0x019c5fac) */
/* WARNING: Removing unreachable block (ram,0x019c60a4) */
/* WARNING: Removing unreachable block (ram,0x019c60ad) */
/* WARNING: Removing unreachable block (ram,0x019c5cdf) */
/* WARNING: Removing unreachable block (ram,0x019c6068) */
/* WARNING: Removing unreachable block (ram,0x019c6071) */
/* WARNING: Removing unreachable block (ram,0x019c6081) */
/* WARNING: Removing unreachable block (ram,0x019c608d) */
/* WARNING: Removing unreachable block (ram,0x019c5c87) */
/* WARNING: Removing unreachable block (ram,0x019c5cb0) */
/* WARNING: Removing unreachable block (ram,0x019c5c89) */
/* WARNING: Removing unreachable block (ram,0x019c5cb2) */
/* WARNING: Removing unreachable block (ram,0x019c6284) */
/* WARNING: Removing unreachable block (ram,0x019c628d) */

void FUN_019c5bf0(void)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong *unaff_RDI;
  undefined8 *puVar9;
  bool bVar10;
  int local_68;
  undefined8 *local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  pcVar2 = DAT_02572370;
  lVar1 = *unaff_RDI;
  if (lVar1 != 0) {
    local_68 = -1;
    while( true ) {
      lVar5 = (longlong)local_68;
      local_68 = local_68 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_68) break;
      lVar8 = *(longlong *)(lVar1 + 0x10);
      lVar5 = *(longlong *)(lVar8 + 8 + lVar5 * 8);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      pVar7 = (pthread_key_t)lVar8;
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01274b60();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        if (lVar5 != local_40) {
          if (local_38 != '\0') {
            bVar10 = lVar5 != 0;
            lVar5 = local_40;
            if (bVar10) {
              FUN_00d50b20();
            }
            goto LAB_019c5e00;
          }
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          bVar10 = lVar5 != 0;
          lVar5 = local_40;
          if (bVar10) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_019c5e00:
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (local_50 == '\0') {
        if (local_58 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      cVar3 = FUN_00c9ff50();
      if (local_58 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        puVar9 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &DAT_02572358;
        (*pcVar2)();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if (local_58 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        FUN_0076f270();
        if (local_58 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        bVar10 = true;
      }
      else {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if (local_50 == '\0') {
          if (local_58 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        FUN_00805b20();
        if (local_58 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          FUN_00d50b00();
          puVar9 = local_58;
        }
        bVar10 = local_58 != (undefined8 *)0x0;
        if (local_58 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_38 = '\0';
      FUN_00d235a0();
      if ((bVar10) && (puVar9 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      local_40 = lVar5;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    if (plVar4 == (longlong *)0x0) {
      return;
    }
  }
  lVar1 = plVar4[2];
  if (0 < *(int *)(lVar1 + 0xc)) {
    pVar7 = 0;
    do {
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019c6680();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_012edae0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pVar7 = pVar7 + 1;
    } while ((int)pVar7 < *(int *)(lVar1 + 0xc));
  }
  FUN_00d50b20();
  return;
}


