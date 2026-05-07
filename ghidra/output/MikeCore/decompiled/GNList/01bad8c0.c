// Function: FUN_01bad8c0
// Address: 01bad8c0
// Size: 738 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01bad9ba) */
/* WARNING: Removing unreachable block (ram,0x01bad9c3) */
/* WARNING: Removing unreachable block (ram,0x01bad940) */
/* WARNING: Removing unreachable block (ram,0x01bad949) */
/* WARNING: Removing unreachable block (ram,0x01badb8b) */
/* WARNING: Removing unreachable block (ram,0x01badb98) */

ulonglong FUN_01bad8c0(float *param_1)

{
  void *pvVar1;
  longlong lVar2;
  pthread_key_t pVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  pVar3 = (pthread_key_t)param_1;
  pvVar1 = _pthread_getspecific(pVar3);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01bad94e;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_01bad94e:
    pvVar1 = _pthread_getspecific(pVar3);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) goto LAB_01badb03;
      FUN_00d50b00();
LAB_01bad9c8:
      pvVar1 = _pthread_getspecific(pVar3);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar7 = (float)FUN_0125a2c0();
      pvVar1 = _pthread_getspecific(pVar3);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar8 = (float)FUN_0152e000();
      pvVar1 = _pthread_getspecific(pVar3);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      pvVar1 = _pthread_getspecific(pVar3);
      lVar4 = local_60;
      if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
        lVar4 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8);
      }
      FUN_01507e40();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (param_1 == (float *)0x0) {
LAB_01badb40:
        uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      }
      else {
        pvVar1 = _pthread_getspecific(pVar3);
        plVar6 = local_40;
        if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
          plVar6 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
        }
        fVar9 = (float)(**(code **)(*plVar6 + 0x3a0))();
        fVar9 = (fVar7 - fVar8) + fVar9;
        *param_1 = fVar9;
        if ((fVar9 != DAT_02391078) || (NAN(fVar9) || NAN(DAT_02391078))) goto LAB_01badb40;
        uVar5 = 0;
      }
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      if (local_40 != (longlong *)0x0) goto LAB_01bad9c8;
LAB_01badb03:
      uVar5 = 0;
    }
    FUN_00d50b20();
    goto LAB_01badb5f;
  }
  uVar5 = 0;
LAB_01badb5f:
  return uVar5 & 0xffffffff;
}


