// Function: FUN_01a72920
// Address: 01a72920
// Size: 2771 bytes
// Class: GNValue

int64_t * FUN_01a72920(void* param_1,uint64_t param_2,char param_3,int64_t *param_4)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  short sVar9;
  void* pVar10;
  uint uVar11;
  int64_t *this_ptr;
  int64_t *plVar12;
  int64_t local_50;
  char local_48;
  
  pVar10 = param_1;
  iVar4 = FUN_01715620();
  if (*param_4 == 0) {
    iVar5 = 0;
    cVar2 = '\0';
  }
  else {
    pvVar7 = _pthread_getspecific(pVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar5 = FUN_01743720();
    plVar12 = (int64_t *)*param_4;
    if (plVar12 == (int64_t *)0x0) {
      cVar2 = '\0';
    }
    else {
      pvVar7 = _pthread_getspecific(pVar10);
      if (pvVar7 != (void *)0x0) {
        plVar12 = (int64_t *)*param_4;
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          plVar12 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
      }
      cVar2 = (**(code **)(*plVar12 + 0x400))();
    }
  }
  iVar4 = iVar4 * 7;
  iVar4 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
  iVar4 = (iVar4 >> 0x1f & 0xcU) + iVar4;
  lVar8 = local_50;
  if ((param_3 == '\0') && (*param_4 != 0)) {
    FUN_017178d0();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    do {
      iVar4 = iVar4 + param_1 * 2 + -1;
      iVar4 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
      iVar4 = (iVar4 >> 0x1f & 0xcU) + iVar4;
      cVar3 = FUN_01716980();
    } while (cVar3 == '\0');
    uVar11 = 0;
    iVar6 = 0;
    if (cVar2 == '\0') {
LAB_01a72cf6:
      if (iVar6 < iVar5) {
        iVar6 = -1;
        if (5 < iVar5) {
          iVar6 = iVar5 + -6;
        }
      }
      else {
        iVar6 = -6;
        if (iVar5 < -5) {
          iVar6 = iVar5 + -1;
        }
      }
      sVar9 = (short)((short)iVar4 * 7) % 0xc;
      iVar5 = sVar9 + 0xc;
      if (-1 < sVar9) {
        iVar5 = (int)sVar9;
      }
      iVar5 = iVar5 - iVar6;
      uVar11 = (int)(iVar5 + (((uint)(iVar5 / 6 + (iVar5 >> 0x1f)) >> 1) - (iVar5 >> 0x1f)) * -0xc)
               >> 0x1f & 0xc;
    }
    else if (((iVar5 != 1) || (iVar4 != 6)) && ((iVar5 != 2 || (iVar4 != 1)))) {
      iVar5 = iVar5 + -3;
      iVar6 = -(uint)(iVar5 == 0);
      goto LAB_01a72cf6;
    }
    FUN_01716350(uVar11);
    if ((local_48 == '\0') && (local_50 != 0)) {
      FUN_00d50b00();
    }
    if (iVar4 == 0) {
LAB_01a72e0b:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar6 = FUN_01715480();
        iVar5 = 1 - iVar6 >> 0x1f;
        FUN_01715d40((((uint)((1 - iVar6) / 6 + iVar5) >> 1) - iVar5) * 0xc,0);
      }
      if (iVar4 != 2) goto LAB_01a72e69;
LAB_01a72ec4:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar6 = FUN_01715480();
        iVar5 = 3 - iVar6 >> 0x1f;
        FUN_01715d40((((uint)((3 - iVar6) / 6 + iVar5) >> 1) - iVar5) * 0xc,0);
      }
      if (iVar4 != 4) goto LAB_01a72f1f;
LAB_01a72f7a:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar6 = FUN_01715480();
        iVar5 = 5 - iVar6 >> 0x1f;
        FUN_01715d40((((uint)((5 - iVar6) / 6 + iVar5) >> 1) - iVar5) * 0xc,0);
      }
      if (iVar4 != 6) goto LAB_01a72fd7;
LAB_01a73034:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar6 = FUN_01715480();
        iVar5 = 7 - iVar6 >> 0x1f;
        FUN_01715d40((((uint)((7 - iVar6) / 6 + iVar5) >> 1) - iVar5) * 0xc,0);
      }
      if (iVar4 != 8) goto LAB_01a7308f;
LAB_01a730ea:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar6 = FUN_01715480();
        iVar5 = 9 - iVar6 >> 0x1f;
        FUN_01715d40((((uint)((9 - iVar6) / 6 + iVar5) >> 1) - iVar5) * 0xc,0);
      }
      if (iVar4 != 10) goto LAB_01a73145;
LAB_01a731a0:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar5 = FUN_01715480();
        iVar4 = 0xb - iVar5 >> 0x1f;
        FUN_01715d40((((uint)((0xb - iVar5) / 6 + iVar4) >> 1) - iVar4) * 0xc,0);
      }
    }
    else {
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        FUN_01715480();
        FUN_01715d40(0,0);
      }
      if (iVar4 != 1) goto LAB_01a72e0b;
LAB_01a72e69:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar6 = FUN_01715480();
        iVar5 = 2 - iVar6 >> 0x1f;
        FUN_01715d40((((uint)((2 - iVar6) / 6 + iVar5) >> 1) - iVar5) * 0xc,0);
      }
      if (iVar4 != 3) goto LAB_01a72ec4;
LAB_01a72f1f:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar6 = FUN_01715480();
        iVar5 = 4 - iVar6 >> 0x1f;
        FUN_01715d40((((uint)((4 - iVar6) / 6 + iVar5) >> 1) - iVar5) * 0xc,0);
      }
      if (iVar4 != 5) goto LAB_01a72f7a;
LAB_01a72fd7:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar6 = FUN_01715480();
        iVar5 = 6 - iVar6 >> 0x1f;
        FUN_01715d40((((uint)((6 - iVar6) / 6 + iVar5) >> 1) - iVar5) * 0xc,0);
      }
      if (iVar4 != 7) goto LAB_01a73034;
LAB_01a7308f:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar6 = FUN_01715480();
        iVar5 = 8 - iVar6 >> 0x1f;
        FUN_01715d40((((uint)((8 - iVar6) / 6 + iVar5) >> 1) - iVar5) * 0xc,0);
      }
      if (iVar4 != 9) goto LAB_01a730ea;
LAB_01a73145:
      cVar2 = FUN_01716980();
      if (cVar2 != '\0') {
        iVar6 = FUN_01715480();
        iVar5 = 10 - iVar6 >> 0x1f;
        FUN_01715d40((((uint)((10 - iVar6) / 6 + iVar5) >> 1) - iVar5) * 0xc,0);
      }
      if (iVar4 != 0xb) goto LAB_01a731a0;
    }
    FUN_01716e60();
    FUN_01716350();
    if (local_50 == 0) {
      lVar8 = 0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (local_48 == '\0') {
        FUN_00d50b00();
      }
    }
    iVar4 = 1;
    do {
      cVar2 = FUN_01716e70();
      if (cVar2 != '\0') {
        FUN_01717260();
        FUN_01715480();
        cVar2 = FUN_01716980();
        if ((cVar2 != '\0') && (iVar5 = FUN_01717260(), iVar5 == -1)) {
          FUN_01717260();
        }
        FUN_01715d40();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0xd);
    if (local_50 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
      goto LAB_01a733a7;
    }
    *(void*)(this_ptr + 1) = 0;
    if (bVar1) goto LAB_01a733c4;
  }
  else {
    FUN_01716260();
    if (local_50 == 0) {
      lVar8 = 0;
      bVar1 = false;
    }
    else if (local_48 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      bVar1 = true;
    }
    FUN_01715d30();
LAB_01a733a7:
    *(void*)(this_ptr + 1) = 0;
    if (bVar1) goto LAB_01a733c4;
  }
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
LAB_01a733c4:
  *this_ptr = lVar8;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

