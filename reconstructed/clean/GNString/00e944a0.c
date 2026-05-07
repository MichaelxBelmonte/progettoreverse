// Function: FUN_00e944a0
// Address: 00e944a0
// Size: 940 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00e944a0(uint32_t param_1,code *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t *plVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint64_t uVar8;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t *plVar9;
  uint32_t uVar10;
  uint64_t uVar11;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  uint32_t local_3c;
  uint64_t local_38;
  
  local_3c = param_1;
  (**(code **)(*this_ptr + 0x3c8))();
  cVar5 = FUN_00e92370();
  if (cVar5 == '\0') {
    local_78 = this_ptr + 6;
    if (unaff_ESI < 1) goto LAB_00e946a1;
    plVar9 = (int64_t *)0x0;
    uVar11 = 0;
    do {
      (**(code **)(*this_ptr + 0x3c0))();
      (**(code **)(*this_ptr + 0x388))();
      FUN_00d50b00();
      FUN_00d059e0();
      plVar4 = local_50;
      if (local_50 == plVar9) {
        plVar4 = plVar9;
        if (((char)uVar11 != '\0') || (local_50 == (int64_t *)0x0)) goto joined_r0x00e94684;
        if (local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_00e945f0;
        }
LAB_00e94583:
        plVar9 = plVar4;
        local_48 = '\0';
        uVar11 = 1;
      }
      else {
        if (local_48 != '\0') {
          if (((char)uVar11 != '\0') && (plVar9 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00e94583;
        }
        local_38 = uVar11;
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        uVar11 = 1;
        if (((char)local_38 != '\0') && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar9 = plVar4;
LAB_00e945f0:
          uVar11 = 1;
          plVar4 = plVar9;
        }
joined_r0x00e94684:
        plVar9 = plVar4;
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar9 + 0x368))();
      (**(code **)(*plVar9 + 0x370))();
      iVar7 = FUN_00e31390();
      if ((iVar7 != 0) || (cVar5 = (**(code **)(*this_ptr + 0x3a0))(), cVar5 == '\0')) break;
      bVar6 = FUN_00d05ae0();
      bVar3 = 1 < unaff_ESI;
      unaff_ESI = unaff_ESI + -1;
    } while ((bVar6 & bVar3) != 0);
    if (param_2 != 0x0) {
      FUN_00d05ae0();
      (*param_2)();
    }
    *(int *)(this_ptr + 0x14) = (int)plVar9[4];
    *(void*)((int64_t)this_ptr + 0xa4) = *(void*)((int64_t)plVar9 + 0x24);
    *(int *)(this_ptr + 0x15) = (int)plVar9[5];
    *(void*)((int64_t)this_ptr + 0xac) = *(void*)((int64_t)plVar9 + 0x2c);
    *(int *)(this_ptr + 0x16) = (int)plVar9[6];
    (**(code **)(*this_ptr + 0x388))();
    uVar10 = 0;
    lVar1 = this_ptr[7];
  }
  else {
    local_78 = this_ptr + 6;
    FUN_00e313d0();
LAB_00e946a1:
    uVar10 = (uint32_t)CONCAT71((int7)((uint64_t)param_2 >> 8),1);
    uVar11 = 0;
    lVar1 = this_ptr[7];
  }
  cVar5 = (char)uVar10;
  if ((lVar1 != 0) && ((char)local_3c != '\0')) {
    local_3c = uVar10;
    FUN_00d403d0();
    lVar1 = g_02789578;
    if (g_02789578 != 0) {
      FUN_00d50b00();
    }
    local_58 = 0;
    lVar2 = this_ptr[7];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    local_88 = 0;
    local_80 = '\0';
    local_60 = lVar2;
    FUN_00d40470(&local_88,&local_60,1,3);
    cVar5 = (char)local_3c;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x3d0))();
  if (*(char *)((int64_t)this_ptr + 0x35) == '\0') {
    iVar7 = FUN_00e31390();
    uVar8 = CONCAT71((int7)((uint64_t)this_ptr >> 8),iVar7 == 0);
    if ((char)uVar11 == '\0' || cVar5 != '\0') goto LAB_00e94847;
  }
  else {
    uVar8 = 0;
    if ((char)uVar11 == '\0' || cVar5 != '\0') goto LAB_00e94847;
  }
  FUN_00d50b20();
LAB_00e94847:
  return uVar8 & 0xffffffff;
}

