// Function: FUN_01536c30
// Address: 01536c30
// Size: 1456 bytes
// Class: Unknown

void FUN_01536c30(double param_1,uint64_t param_2)

{
  void* pVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  void* in_ECX;
  void* pVar10;
  uint64_t arg1;
  int iVar11;
  int64_t lVar12;
  int iVar13;
  bool bVar14;
  double dVar15;
  double dVar16;
  double local_a0;
  int iStack_8c;
  uint32_t local_84;
  double local_80;
  uint64_t local_78;
  uint32_t local_68;
  void* pStack_64;
  double local_60;
  uint32_t local_54;
  int64_t local_50;
  char local_48;
  
  local_80 = param_1;
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017049c0();
  lVar2 = local_50;
  if ((((local_48 == '\0') && (local_50 != 0)) && (FUN_00d50b00(), local_48 != '\0')) &&
     (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_54 = 0xffffffff;
  pvVar6 = _pthread_getspecific(in_ECX);
  pVar1 = (void*)lVar2;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    in_ECX = pVar1;
  }
  local_60 = (double)FUN_018fd630();
  pvVar6 = _pthread_getspecific(in_ECX);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), pVar10 = pVar1, lVar7 == 0)) {
    pVar10 = in_ECX;
  }
  local_78 = FUN_018fe5f0();
  local_84 = 0xffffffff;
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016ca840(0,arg1,&local_68,&local_84);
  lVar7 = local_50;
  if ((((local_48 == '\0') && (local_50 != 0)) && (FUN_00d50b00(), local_48 != '\0')) &&
     (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_60 = g_023b4df8 / local_60;
  local_a0 = 0.0;
  iVar13 = 0;
  iVar11 = 0;
  do {
    if (g_0240ed28 < (double)((uint64_t)(local_60 - local_a0) & g_023908f0)) {
      FUN_00b5f040(local_60,local_80);
      local_a0 = local_60;
    }
    if (lVar7 != 0) {
      iVar4 = FUN_0123fef0();
      iVar5 = FUN_0123ff00();
      if ((iVar4 != iVar11) || (iVar5 != iVar13)) {
        FUN_00b5f120(local_80,iVar5);
        iVar11 = iVar4;
        iVar13 = iVar5;
      }
    }
    lVar12 = lVar7;
    if (local_78 >> 0x20 == 0) {
      if (pStack_64 == 0) {
LAB_015371d2:
        if (lVar12 != 0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        return;
      }
LAB_01536f45:
      uVar9 = CONCAT44(pStack_64,local_68);
    }
    else {
      uVar9 = arg1;
      if ((pStack_64 != 0) && (cVar3 = FUN_00e7c020(), cVar3 != '\0')) goto LAB_01536f45;
      arg1 = local_78;
      pVar10 = (void*)uVar9;
      pvVar6 = _pthread_getspecific(pVar10);
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pVar10 = pVar1;
      }
      local_60 = (double)FUN_018fd630();
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_78 = FUN_018fe5f0();
      local_60 = g_023b4df8 / local_60;
      uVar9 = CONCAT44(pStack_64,local_68);
    }
    pVar10 = pStack_64;
    if (pStack_64 != 0) {
      local_78._4_4_ = (int)(local_78 >> 0x20);
      bVar14 = local_78._4_4_ != 0;
      if (bVar14) {
        cVar3 = FUN_00e7c020();
        if (cVar3 != '\0') goto LAB_015370c0;
        uVar9 = CONCAT44(pStack_64,local_68);
      }
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pVar10 = 0;
      FUN_016ca840(0,CONCAT44(pStack_64,local_68),&local_68,&local_84);
      lVar12 = local_50;
      arg1 = uVar9;
      if (local_50 == lVar7) {
LAB_015370a4:
        lVar12 = lVar7;
        if (local_48 != '\0') {
LAB_015370aa:
          if (local_50 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
            lVar7 = lVar12;
            goto LAB_015370a4;
          }
          if (local_48 == '\0') goto LAB_015370c0;
          goto LAB_015370aa;
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
      }
    }
LAB_015370c0:
    iVar4 = (int)(arg1 >> 0x20);
    iStack_8c = (int)((uint64_t)param_2 >> 0x20);
    if (((iVar4 != 0) && (iStack_8c != 0)) && (cVar3 = FUN_00e7c020(), cVar3 == '\0'))
    goto LAB_015371d2;
    iVar5 = FUN_00b60810();
    if (iVar5 == 0) {
      dVar15 = (double)FUN_00e7c860();
      dVar16 = (double)FUN_00e7c860();
      local_80 = local_80 + (dVar15 - dVar16);
    }
    else {
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_80 = (double)FUN_016c98e0();
    }
    if (((iVar4 == 0) || (iStack_8c == 0)) ||
       (cVar3 = FUN_00e7c020(), lVar7 = lVar12, cVar3 == '\0')) goto LAB_015371d2;
  } while( true );
}

