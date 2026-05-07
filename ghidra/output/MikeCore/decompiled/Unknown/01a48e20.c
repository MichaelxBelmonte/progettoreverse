// Function: FUN_01a48e20
// Address: 01a48e20
// Size: 996 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a490aa) */
/* WARNING: Removing unreachable block (ram,0x01a490b6) */
/* WARNING: Removing unreachable block (ram,0x01a491b3) */
/* WARNING: Removing unreachable block (ram,0x01a491bc) */

void FUN_01a48e20(void)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  void *pvVar6;
  code *pcVar7;
  undefined8 *puVar8;
  pthread_key_t pVar9;
  code *pcVar10;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar11;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  pcVar2 = DAT_02572370;
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar11 = 0;
      pcVar10 = DAT_02572370;
      do {
        lVar3 = local_48;
        pVar9 = (pthread_key_t)pcVar10;
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f51f0();
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01657380();
        local_38[0] = local_40[0];
        pcVar10 = (code *)local_38;
        pcVar7 = (code *)local_40;
        if (local_40[0] == (code)0x0) {
          pcVar7 = pcVar10;
        }
        *pcVar7 = (code)0x0;
        if ((local_40[0] != (code)0x0) && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        local_40[0] = (code)0x0;
        cVar4 = FUN_00c9ff50();
        if ((local_40[0] != (code)0x0) && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') {
          puVar8 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar8 = &DAT_02572358;
          (*pcVar2)();
          FUN_01a4ee80();
          if (puVar8 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_01a49500();
        pvVar6 = _pthread_getspecific((pthread_key_t)pcVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_48 = local_58;
        local_40[0] = (code)0x0;
        FUN_00d235a0();
        if ((local_40[0] != (code)0x0) && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != (code)0x0) && (lVar3 != 0)) {
          FUN_00d50b20();
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  *unaff_RDI = plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


