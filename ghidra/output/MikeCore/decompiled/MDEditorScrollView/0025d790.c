// Function: FUN_0025d790
// Address: 0025d790
// Size: 899 bytes
// Class: MDEditorScrollView


/* WARNING: Removing unreachable block (ram,0x0025d969) */
/* WARNING: Removing unreachable block (ram,0x0025d975) */
/* WARNING: Removing unreachable block (ram,0x0025d9ce) */
/* WARNING: Removing unreachable block (ram,0x0025d9d7) */
/* WARNING: Removing unreachable block (ram,0x0025d9e2) */
/* WARNING: Removing unreachable block (ram,0x0025d9eb) */

undefined8 * FUN_0025d790(void)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  void *pvVar5;
  code *pcVar6;
  undefined8 *puVar7;
  pthread_key_t pVar8;
  code *pcVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar10;
  undefined8 *local_58;
  char local_50;
  undefined8 *local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  pcVar2 = DAT_02572370;
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar10 = 0;
      pcVar9 = DAT_02572370;
      do {
        puVar3 = local_48;
        pVar8 = (pthread_key_t)pcVar9;
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013df480();
        local_38[0] = local_40[0];
        pcVar9 = (code *)local_38;
        pcVar6 = (code *)local_40;
        if (local_40[0] == (code)0x0) {
          pcVar6 = pcVar9;
        }
        *pcVar6 = (code)0x0;
        if ((local_40[0] != (code)0x0) && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        FUN_0025dd10();
        if (local_40[0] == (code)0x0) {
          if (((local_48 != (undefined8 *)0x0) && (FUN_00d50b00(), local_40[0] != (code)0x0)) &&
             (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = (code)0x0;
        }
        puVar7 = local_48;
        if (local_48 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar7 = &DAT_02572358;
          (*pcVar2)();
          FUN_0025ddc0();
        }
        pvVar5 = _pthread_getspecific((pthread_key_t)pcVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        if (local_50 == '\0') {
          if (local_58 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_48 = local_58;
        local_40[0] = (code)0x0;
        FUN_00d21140();
        if ((local_40[0] != (code)0x0) && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (local_58 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (puVar7 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38[0] != (code)0x0) && (puVar3 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


