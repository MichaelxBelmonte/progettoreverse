// Function: FUN_01c9d710
// Address: 01c9d710
// Size: 763 bytes
// Class: MUAudioFileSource


/* WARNING: Removing unreachable block (ram,0x01c9d815) */
/* WARNING: Removing unreachable block (ram,0x01c9d80c) */
/* WARNING: Removing unreachable block (ram,0x01c9d92c) */
/* WARNING: Removing unreachable block (ram,0x01c9d935) */
/* WARNING: Removing unreachable block (ram,0x01c9d993) */
/* WARNING: Removing unreachable block (ram,0x01c9d99c) */
/* WARNING: Removing unreachable block (ram,0x01c9d962) */
/* WARNING: Removing unreachable block (ram,0x01c9d96f) */

longlong * FUN_01c9d710(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  undefined *puVar7;
  longlong *unaff_RDI;
  int iVar8;
  longlong local_98;
  char local_90;
  longlong local_40;
  char local_38;
  
  if (*param_2 != 0) {
    plVar6 = param_1;
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    pVar5 = (pthread_key_t)plVar6;
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012eb770();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (local_98 != 0) {
      pvVar2 = _pthread_getspecific(pVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        FUN_00d50b00();
        FUN_00cb1fa0();
      }
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar7 = &DAT_02572358;
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      lVar1 = *param_1;
      if (lVar1 != 0) {
        if (0 < *(int *)(lVar1 + 0xc)) {
          iVar8 = 0;
          do {
            pvVar2 = _pthread_getspecific((pthread_key_t)puVar7);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012f98b0();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            if (local_40 != 0) {
              local_38 = '\0';
              FUN_00d21140();
              FUN_00d50b20();
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(lVar1 + 0xc));
        }
        FUN_001159b0();
      }
      *unaff_RDI = (longlong)puVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (lVar3 == 0) {
        return unaff_RDI;
      }
      FUN_00d50b20();
      return unaff_RDI;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar3 = *param_1;
  if ((char)param_1[1] == '\0') {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *unaff_RDI = lVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return unaff_RDI;
}


