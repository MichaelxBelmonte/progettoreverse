// Function: FUN_013549f0
// Address: 013549f0
// Size: 1267 bytes
// Class: MUAudioSourceDescription


/* WARNING: Removing unreachable block (ram,0x01354ca8) */
/* WARNING: Removing unreachable block (ram,0x01354cb1) */
/* WARNING: Removing unreachable block (ram,0x01354b3f) */
/* WARNING: Removing unreachable block (ram,0x01354b48) */
/* WARNING: Removing unreachable block (ram,0x01354c6f) */
/* WARNING: Removing unreachable block (ram,0x01354c78) */
/* WARNING: Removing unreachable block (ram,0x01354e86) */
/* WARNING: Removing unreachable block (ram,0x01354e8f) */
/* WARNING: Removing unreachable block (ram,0x01354b78) */
/* WARNING: Removing unreachable block (ram,0x01354b81) */

void FUN_013549f0(float param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  pthread_key_t pVar7;
  undefined *puVar8;
  longlong unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  
  fVar11 = *(float *)(unaff_RDI + 0x7c);
  if ((fVar11 != param_1) || (NAN(fVar11) || NAN(param_1))) {
    FUN_00d64850();
    *(float *)(unaff_RDI + 0x7c) = param_1;
    FUN_00d64910();
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar8 = &DAT_02572358;
    *puVar4 = &DAT_02572358;
    pcVar2 = DAT_02572370;
    (*DAT_02572370)();
    if (param_1 <= fVar11) {
      lVar10 = *(longlong *)(unaff_RDI + 0x100);
      if (0 < *(int *)(lVar10 + 0xc)) {
        lVar9 = 0;
        do {
          pVar7 = (pthread_key_t)puVar8;
          lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar9 * 8);
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar11 = (float)FUN_014bae60();
          if ((param_1 <= fVar11) && (cVar3 = FUN_00d23d70(), cVar3 == '\0')) {
            FUN_00d21140();
          }
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
          lVar9 = lVar9 + 1;
          lVar10 = *(longlong *)(unaff_RDI + 0x100);
          puVar8 = (undefined *)(longlong)*(int *)(lVar10 + 0xc);
        } while (lVar9 < (longlong)puVar8);
      }
      if (0 < *(int *)((longlong)puVar4 + 0xc)) {
        lVar10 = 0;
        do {
          lVar9 = *(longlong *)(puVar4[2] + lVar10 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          FUN_01329970();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar9 = *(longlong *)(puVar4[2] + lVar10 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          FUN_01329030();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((longlong)puVar4 + 0xc));
      }
    }
    else {
      lVar10 = *(longlong *)(unaff_RDI + 0xd0);
      if (0 < *(int *)(lVar10 + 0xc)) {
        lVar9 = 0;
        do {
          pVar7 = (pthread_key_t)puVar8;
          lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar9 * 8);
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar11 = (float)FUN_014bae60();
          if ((fVar11 < param_1) && (cVar3 = FUN_00d23d70(), cVar3 == '\0')) {
            FUN_00d21140();
          }
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
          lVar9 = lVar9 + 1;
          lVar10 = *(longlong *)(unaff_RDI + 0xd0);
          puVar8 = (undefined *)(longlong)*(int *)(lVar10 + 0xc);
        } while (lVar9 < (longlong)puVar8);
      }
      if (0 < *(int *)((longlong)puVar4 + 0xc)) {
        lVar10 = 0;
        do {
          lVar9 = *(longlong *)(puVar4[2] + lVar10 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          FUN_013291f0();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar9 = *(longlong *)(puVar4[2] + lVar10 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          FUN_013297b0();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((longlong)puVar4 + 0xc));
      }
    }
    if (*(longlong *)(unaff_RDI + 0x1b8) == 0) {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_02572358;
      (*pcVar2)();
      puVar1 = *(undefined8 **)(unaff_RDI + 0x1b8);
      if (puVar1 == puVar6) {
        FUN_00d50b20();
      }
      else {
        *(undefined8 **)(unaff_RDI + 0x1b8) = puVar6;
        if (puVar1 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if (0 < *(int *)((longlong)puVar4 + 0xc)) {
      lVar10 = 0;
      do {
        lVar9 = *(longlong *)(puVar4[2] + lVar10 * 8);
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        FUN_00d235a0();
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)((longlong)puVar4 + 0xc));
    }
    FUN_00d50b20();
  }
  return;
}


