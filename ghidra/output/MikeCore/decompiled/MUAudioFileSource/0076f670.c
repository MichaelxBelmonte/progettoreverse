// Function: FUN_0076f670
// Address: 0076f670
// Size: 824 bytes
// Class: MUAudioFileSource


/* WARNING: Removing unreachable block (ram,0x0076f921) */
/* WARNING: Removing unreachable block (ram,0x0076f92a) */
/* WARNING: Removing unreachable block (ram,0x0076f7ef) */
/* WARNING: Removing unreachable block (ram,0x0076f7f8) */
/* WARNING: Removing unreachable block (ram,0x0076f853) */
/* WARNING: Removing unreachable block (ram,0x0076f85c) */
/* WARNING: Removing unreachable block (ram,0x0076f8a8) */
/* WARNING: Removing unreachable block (ram,0x0076f8b1) */
/* WARNING: Removing unreachable block (ram,0x0076f983) */
/* WARNING: Removing unreachable block (ram,0x0076f98c) */
/* WARNING: Removing unreachable block (ram,0x0076f952) */
/* WARNING: Removing unreachable block (ram,0x0076f95b) */

undefined8 * FUN_0076f670(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  pthread_key_t pVar8;
  undefined8 *unaff_RDI;
  longlong lVar9;
  undefined4 uVar10;
  float local_58;
  float local_54;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*pcVar2)();
  if (0 < *(int *)(*param_2 + 0xc)) {
    lVar9 = 0;
    do {
      pVar8 = (pthread_key_t)param_1;
      pvVar6 = _pthread_getspecific(pVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      if (iVar3 == 1) {
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0137c150();
        lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x10) + lVar9 * 8);
        if ((DAT_023b7c14 <= local_58) || (local_54 <= DAT_023b7c18)) {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x10) + lVar9 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      lVar9 = lVar9 + 1;
      param_1 = (longlong)*(int *)(*param_2 + 0xc);
    } while (lVar9 < param_1);
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  uVar10 = (*pcVar2)();
  if (*(int *)((longlong)puVar4 + 0xc) == 0) {
    if (*(int *)((longlong)puVar5 + 0xc) != 0) {
      FUN_00d214d0(uVar10,*(undefined4 *)((longlong)puVar7 + 0xc));
    }
  }
  else if (*(int *)((longlong)puVar5 + 0xc) == 0) {
    FUN_00d214d0(uVar10,*(undefined4 *)((longlong)puVar7 + 0xc));
  }
  else {
    FUN_00d214d0(uVar10,*(undefined4 *)((longlong)puVar7 + 0xc));
  }
  *unaff_RDI = puVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  FUN_00d50b20();
  return unaff_RDI;
}


