// Function: FUN_019e80a0
// Address: 019e80a0
// Size: 832 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x019e8205) */
/* WARNING: Removing unreachable block (ram,0x019e8212) */

void FUN_019e80a0(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong local_68;
  char local_60;
  longlong local_50;
  char local_48;
  
  (**(code **)(*unaff_RDI + 0xa10))();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505900();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *unaff_RSI;
  lVar2 = unaff_RDI[0x4c];
  lVar3 = lVar2;
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0x4c] = lVar1;
    lVar3 = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar3 = unaff_RDI[0x4c];
    }
  }
  if ((lVar3 != 0) && (local_50 != 0)) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar9 = FUN_0125a280();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar6 = 0;
    FUN_016c45d0(uVar9,0);
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar6 = 0;
    uVar10 = FUN_016c46a0(0,0);
    fVar7 = (float)(**(code **)(*unaff_RDI + 0x938))(uVar9);
    fVar8 = (float)(**(code **)(*unaff_RDI + 0x938))(uVar10);
    uVar11 = uVar9;
    if ((fVar8 < fVar7) && (fVar7 - fVar8 < DAT_023942a8)) {
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_016cade0();
      uVar11 = uVar10;
      if (cVar4 == '\0') {
        uVar11 = uVar9;
      }
    }
    (**(code **)(&UNK_00001420 + *unaff_RDI))(uVar11);
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125a2c0();
    (**(code **)(&UNK_00001428 + *unaff_RDI))();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01259650();
    (**(code **)(&UNK_00001430 + *unaff_RDI))();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  return;
}


