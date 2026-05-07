// Function: FUN_0172f600
// Address: 0172f600
// Size: 1609 bytes
// Class: GNString
// String references:
//   "(0 <= index) && (index < _elements->getCount())"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t FUN_0172f600(uint64_t param_1)

{
  double dVar1;
  double dVar2;
  int64_t *plVar3;
  char cVar4;
  uint32_t uVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  void* unaff_ESI;
  int64_t this_ptr;
  float fVar11;
  float fVar12;
  int64_t local_58;
  char local_50;
  int64_t *local_40;
  char local_38;
  
  if ((int)unaff_ESI < 0) {
    FUN_016aea20(param_1,"(0 <= index) && (index < _elements->getCount())");
    return 0;
  }
  lVar8 = *(int64_t *)(this_ptr + 0x10);
  if (*(int *)(lVar8 + 0xc) <= (int)unaff_ESI) {
    FUN_016aea20(param_1,"(0 <= index) && (index < _elements->getCount())");
    lVar8 = *(int64_t *)(this_ptr + 0x10);
  }
  if (*(int *)(lVar8 + 0xc) <= (int)unaff_ESI) {
    return 0;
  }
  pvVar7 = _pthread_getspecific(unaff_ESI);
  if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    cVar4 = FUN_0125a2d0();
    if (cVar4 == '\0') goto LAB_0172f6df;
LAB_0172f68d:
    pvVar7 = _pthread_getspecific(unaff_ESI);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar11 = (float)FUN_0125a2c0();
    fVar12 = (float)_exp2f(g_023941f4 * fVar11);
    *(float *)(this_ptr + 0x18) = fVar12 * g_023941f8;
    pvVar7 = _pthread_getspecific(unaff_ESI);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      pvVar7 = _pthread_getspecific(unaff_ESI);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar7 = _pthread_getspecific(unaff_ESI);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(unaff_ESI);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_01507f00();
      *(void*)(this_ptr + 0x1c) = uVar5;
      pvVar7 = _pthread_getspecific(unaff_ESI);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508450();
      pvVar7 = _pthread_getspecific(unaff_ESI);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar7 = _pthread_getspecific(unaff_ESI);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar9 = FUN_01507970();
      unaff_ESI = 0;
      FUN_01510b20(0,uVar9,0,this_ptr + 0x44);
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        pvVar7 = _pthread_getspecific(unaff_ESI);
        plVar10 = local_40;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar10 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        uVar5 = (**(code **)(*plVar10 + 0x370))();
        *(void*)(this_ptr + 0x1c) = uVar5;
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_0172f991;
    }
    iVar6 = (int)(fVar11 / g_023908e0 + g_0239011c);
  }
  else {
    cVar4 = FUN_0125a2d0();
    if (cVar4 != '\0') goto LAB_0172f68d;
LAB_0172f6df:
    *(void*)(this_ptr + 0x18) = 0;
    iVar6 = -0x80000000;
  }
  *(int *)(this_ptr + 0x1c) = iVar6;
LAB_0172f991:
  plVar10 = g_028adb48;
  pvVar7 = _pthread_getspecific(unaff_ESI);
  plVar3 = g_028adb48;
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar10 = plVar3, lVar8 != 0)) {
    plVar10 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  pvVar7 = _pthread_getspecific(unaff_ESI);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126cd70();
  fVar12 = (float)(**(code **)(*plVar10 + 0x390))();
  fVar11 = g_02390124;
  if (fVar12 * g_02411d6c <= g_02390124) {
    fVar11 = fVar12 * g_02411d6c;
  }
  *(float *)(this_ptr + 0x20) = fVar11;
  pvVar7 = _pthread_getspecific(unaff_ESI);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar9 = FUN_0125a280();
  *(void*)(this_ptr + 0x24) = uVar9;
  pvVar7 = _pthread_getspecific(unaff_ESI);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar1 = (double)FUN_0125a280();
  pvVar7 = _pthread_getspecific(unaff_ESI);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar2 = (double)FUN_01264310();
  *(double *)(this_ptr + 0x2c) = (dVar1 + dVar2) - *(double *)(this_ptr + 0x24);
  pvVar7 = _pthread_getspecific(unaff_ESI);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar1 = (double)FUN_0125a280();
  pvVar7 = _pthread_getspecific(unaff_ESI);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar2 = (double)FUN_01264380();
  *(double *)(this_ptr + 0x34) = (dVar1 + dVar2) - *(double *)(this_ptr + 0x24);
  pvVar7 = _pthread_getspecific(unaff_ESI);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar1 = (double)FUN_0125a280();
  pvVar7 = _pthread_getspecific(unaff_ESI);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar2 = (double)FUN_01264170();
  *(double *)(this_ptr + 0x3c) = (dVar1 + dVar2) - *(double *)(this_ptr + 0x24);
  return this_ptr + 0x18;
}

