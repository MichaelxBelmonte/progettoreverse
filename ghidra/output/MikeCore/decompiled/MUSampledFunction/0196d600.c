// Function: FUN_0196d600
// Address: 0196d600
// Size: 934 bytes
// Class: MUSampledFunction


void FUN_0196d600(pthread_key_t param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  longlong unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_30;
  char local_28;
  
  if ((*(longlong *)(unaff_RDI + 0x178) != 0) &&
     (DAT_02390124 < *(float *)(unaff_RDI + 0x114) || DAT_02390124 == *(float *)(unaff_RDI + 0x114))
     ) {
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0126bcd0();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126ef70();
      if (local_30 == 0) {
        cVar6 = '\0';
      }
      else {
        pvVar8 = _pthread_getspecific(param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        pvVar8 = _pthread_getspecific(param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar6 = FUN_0124c5d0();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if (cVar6 == '\0') {
        puVar9 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &DAT_02513860;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        *(undefined8 *)((longlong)puVar9 + 0x29) = 0;
        *(undefined8 *)((longlong)puVar9 + 0x31) = 0;
        FUN_00d500e0();
        puVar1 = *(undefined8 **)(unaff_RDI + 0x1d8);
        if (puVar1 == puVar9) {
          FUN_00d50b20();
        }
        else {
          *(undefined8 **)(unaff_RDI + 0x1d8) = puVar9;
          if (puVar1 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*(longlong *)(unaff_RDI + 0x170) + 0x10))();
        FUN_00d50b00();
        FUN_01a05b20();
        if ((longlong *)(unaff_RDI + 0x170) != (longlong *)0x0) {
          (**(code **)(*(longlong *)(unaff_RDI + 0x170) + 0x10))();
          FUN_00d50b20();
        }
        uVar7 = FUN_01968c50();
        *(undefined1 *)(*(longlong *)(unaff_RDI + 0x1d8) + 0x38) = uVar7;
        if (*(longlong *)(unaff_RDI + 0x1e0) == 0) {
          return;
        }
        *(undefined8 *)(unaff_RDI + 0x1e0) = 0;
      }
      else {
        dVar4 = (double)FUN_00e7d6f0();
        if (dVar4 - *(double *)(unaff_RDI + 0x1e8) <= DAT_023942d0) {
          return;
        }
        puVar9 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &DAT_02513860;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        *(undefined8 *)((longlong)puVar9 + 0x29) = 0;
        *(undefined8 *)((longlong)puVar9 + 0x31) = 0;
        FUN_00d500e0();
        puVar1 = *(undefined8 **)(unaff_RDI + 0x1d8);
        if (puVar1 == puVar9) {
          FUN_00d50b20();
        }
        else {
          *(undefined8 **)(unaff_RDI + 0x1d8) = puVar9;
          if (puVar1 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*(longlong *)(unaff_RDI + 0x170) + 0x10))();
        FUN_00d50b00();
        FUN_01a05b20();
        if ((longlong *)(unaff_RDI + 0x170) != (longlong *)0x0) {
          (**(code **)(*(longlong *)(unaff_RDI + 0x170) + 0x10))();
          FUN_00d50b20();
        }
        uVar5 = FUN_00e7d6f0();
        *(undefined8 *)(unaff_RDI + 0x1e8) = uVar5;
        lVar2 = *(longlong *)(unaff_RDI + 0x1d8);
        lVar3 = *(longlong *)(unaff_RDI + 0x1e0);
        if (lVar3 == lVar2) {
          return;
        }
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        *(longlong *)(unaff_RDI + 0x1e0) = lVar2;
        if (lVar3 == 0) {
          return;
        }
      }
      FUN_00d50b20();
    }
  }
  return;
}


