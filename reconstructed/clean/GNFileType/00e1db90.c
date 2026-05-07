// Function: FUN_00e1db90
// Address: 00e1db90
// Size: 3033 bytes
// Class: GNFileType
// String references:
//   "GNFileType"
//   "GNAndQualifier"
//   "GNOrQualifier"
//   "GNString"
//   "expressionForKeyPath:"
//   "expressionForConstantValue:"
//   "predicateWithLeftExpression:rightExpression:modifier:type:options:"
//   "addObject:"
//   "objectAtIndex:"

uint64_t FUN_00e1db90(void)

{
  int64_t *plVar1;
  void*puVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  uint64_t uVar12;
  int64_t *this_ptr;
  uint64_t uVar13;
  int64_t **pplVar14;
  bool bVar15;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar16;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  int64_t *local_78;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_31;
  
  plVar11 = (int64_t *)*this_ptr;
  FUN_0004a6e0();
  if (plVar11 == (int64_t *)0x0) {
LAB_00e1dbd5:
    plVar11 = &g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar11 = this_ptr;
    if (cVar3 == '\0') goto LAB_00e1dbd5;
  }
  plVar1 = (int64_t *)*plVar11;
  local_31 = (char)plVar11[1];
  if ((local_31 == '\0') || (plVar1 == (int64_t *)0x0)) {
    if (plVar1 == (int64_t *)0x0) {
      plVar11 = (int64_t *)*this_ptr;
      FUN_00024c80();
      if (plVar11 == (int64_t *)0x0) {
LAB_00e1ded4:
        plVar11 = &g_02802688;
      }
      else {
        (**(code **)(*plVar11 + 0x360))();
        cVar3 = FUN_00e85ea0();
        plVar11 = this_ptr;
        if (cVar3 == '\0') goto LAB_00e1ded4;
      }
      lVar5 = plVar11[1];
      if (((char)lVar5 == '\0') || (*plVar11 == 0)) {
        if (*plVar11 == 0) {
          return 0;
        }
      }
      else {
        FUN_00d50b00();
      }
      _objc_alloc();
      (*PTR__objc_msgSend_024a9998)();
      uVar12 = _objc_autorelease();
      (**(code **)(*(int64_t *)*this_ptr + 0x3d8))();
      plVar11 = local_68;
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00e1e2a5;
        }
      }
      else if (local_68 != (int64_t *)0x0) {
LAB_00e1e2a5:
        puVar2 = PTR__objc_msgSend_024a9998;
        local_60 = '\0';
        local_68 = (int64_t *)0x0;
        local_58 = plVar11;
        local_50 = 0xffffffff;
        local_48 = 0;
        local_50._4_4_ = 0;
        while( true ) {
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar4 = -local_50._4_4_;
            }
            else {
              iVar4 = (int)local_50 - local_50._4_4_;
              local_50 = CONCAT44(local_50._4_4_,iVar4);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar4 = 0;
            }
            local_50 = CONCAT44(iVar4,(int)local_50);
          }
          lVar6 = (int64_t)(int)local_50;
          iVar4 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar4);
          if (*(int *)((int64_t)local_58 + 0xc) <= iVar4) break;
          local_68 = *(int64_t **)(local_58[2] + 8 + lVar6 * 8);
          lVar6 = FUN_00e1db90();
          if (lVar6 != 0) {
            (*puVar2)(extraout_XMM0_Da_06,lVar6);
          }
        }
        FUN_00c6f7c0();
        FUN_00d50b20();
      }
      plVar11 = (int64_t *)*this_ptr;
      if ((g_026cd900 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_026cd850 = FUN_00024c80();
        g_026cd838 = "GNAndQualifier";
        g_026cd840 = 0x28;
        g_026cd848 = FUN_00024c40;
        g_026cd858 = 0;
        ram_00000000026cd860 = 0;
        g_026cd868 = 0;
        ram_00000000026cd870 = 0;
        g_026cd878 = 0;
        ram_00000000026cd880 = 0;
        g_026cd888 = 0;
        ram_00000000026cd890 = 0;
        g_026cd898 = 0;
        ram_00000000026cd8a0 = 0;
        g_026cd8a8 = 0;
        ram_00000000026cd8b0 = 0;
        g_026cd8b8 = 0;
        ram_00000000026cd8c0 = 0;
        g_026cd8c8 = 0;
        ram_00000000026cd8d0 = 0;
        g_026cd8d8 = 0;
        ram_00000000026cd8e0 = 0;
        g_026cd8e8 = 0;
        ram_00000000026cd8f0 = 0;
        g_026cd8f8 = 0;
        ___cxa_guard_release();
      }
      if (plVar11 == (int64_t *)0x0) {
LAB_00e1e3bf:
        plVar11 = &g_02802688;
      }
      else {
        (**(code **)(*plVar11 + 0x360))();
        cVar3 = FUN_00e85ea0();
        plVar11 = this_ptr;
        if (cVar3 == '\0') goto LAB_00e1e3bf;
      }
      uVar7 = 1;
      if (*plVar11 == 0) {
        plVar11 = (int64_t *)*this_ptr;
        if ((g_0277a740 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          g_026d4418 = FUN_00024c80();
          g_026d4400 = "GNOrQualifier";
          g_026d4408 = 0x28;
          g_026d4410 = FUN_00053cf0;
          g_026d4420 = 0;
          ram_00000000026d4428 = 0;
          g_026d4430 = 0;
          ram_00000000026d4438 = 0;
          g_026d4440 = 0;
          ram_00000000026d4448 = 0;
          g_026d4450 = 0;
          ram_00000000026d4458 = 0;
          g_026d4460 = 0;
          ram_00000000026d4468 = 0;
          g_026d4470 = 0;
          ram_00000000026d4478 = 0;
          g_026d4480 = 0;
          ram_00000000026d4488 = 0;
          g_026d4490 = 0;
          ram_00000000026d4498 = 0;
          g_026d44a0 = 0;
          ram_00000000026d44a8 = 0;
          g_026d44b0 = 0;
          ram_00000000026d44b8 = 0;
          g_026d44c0 = 0;
          ___cxa_guard_release();
        }
        if (plVar11 == (int64_t *)0x0) {
LAB_00e1e407:
          this_ptr = &g_02802688;
        }
        else {
          (**(code **)(*plVar11 + 0x360))();
          cVar3 = FUN_00e85ea0();
          if (cVar3 == '\0') goto LAB_00e1e407;
        }
        uVar7 = 2;
        if (*this_ptr == 0) {
          (*PTR__objc_msgSend_024a9998)();
        }
      }
      lVar6 = (*PTR__objc_msgSend_024a9998)();
      if (lVar6 == 1) {
        uVar12 = (*PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_07,0);
      }
      else {
        uVar13 = (*PTR__objc_msgSend_024a9998)();
        if (uVar13 < 2) {
          uVar12 = 0;
        }
        else {
          _objc_alloc();
          (*PTR__objc_msgSend_024a9998)(uVar12,uVar7);
          uVar12 = _objc_autorelease();
        }
      }
      bVar15 = true;
      if ((char)lVar5 != '\0') {
        bVar15 = true;
        FUN_00d50b20();
      }
      goto LAB_00e1e259;
    }
  }
  else {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x3d0))();
  plVar11 = local_68;
  if ((((local_60 == '\0') && (local_68 != (int64_t *)0x0)) && (FUN_00d50b00(), local_60 != '\0'))
     && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_40 = plVar11;
  (**(code **)(*plVar1 + 0x3f0))();
  local_78 = local_68;
  if (local_60 == '\0') {
    if (local_68 == (int64_t *)0x0) {
      local_78 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_78 = local_68;
  }
  if ((g_027782e0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026d19f8 = FUN_00d4fe50();
    g_026d19e0 = "GNFileType";
    g_026d19e8 = 0x48;
    g_026d19f0 = FUN_00042280;
    g_026d1a00 = 0;
    ram_00000000026d1a08 = 0;
    g_026d1a10 = 0;
    ram_00000000026d1a18 = 0;
    g_026d1a20 = 0;
    ram_00000000026d1a28 = 0;
    g_026d1a30 = 0;
    ram_00000000026d1a38 = 0;
    g_026d1a40 = 0;
    ram_00000000026d1a48 = 0;
    g_026d1a50 = 0;
    ram_00000000026d1a58 = 0;
    g_026d1a60 = 0;
    ram_00000000026d1a68 = 0;
    g_026d1a70 = 0;
    ram_00000000026d1a78 = 0;
    g_026d1a80 = 0;
    ram_00000000026d1a88 = 0;
    g_026d1a90 = 0;
    ram_00000000026d1a98 = 0;
    g_026d1aa0 = 0;
    ___cxa_guard_release();
  }
  if (local_78 == (int64_t *)0x0) {
LAB_00e1dc99:
    if (g_02802688 == 0) goto LAB_00e1de16;
LAB_00e1dcec:
    plVar11 = local_40;
    lVar5 = g_027e8d78;
    if (g_027e8d78 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar11 + 0x50))();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') goto LAB_00e1de16;
    FUN_00e1d530();
    lVar5 = (*PTR__objc_msgSend_024a9998)();
    if (lVar5 == 0) goto LAB_00e1e079;
    lVar5 = (*PTR__objc_msgSend_024a9998)();
    uVar12 = *(void*)PTR__kMDItemContentType_024a9948;
    if (lVar5 == 1) {
      uVar12 = (*PTR__objc_msgSend_024a9998)();
      uVar7 = (*PTR__objc_msgSend_024a9998)(extraout_XMM0_Da,0);
      uVar7 = (*PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_00,uVar7);
      uVar12 = (*PTR__objc_msgSend_024a9998)(uVar7,uVar12,0,4);
      plVar11 = local_40;
    }
    else {
      _objc_alloc();
      (*PTR__objc_msgSend_024a9998)();
      uVar7 = _objc_autorelease();
      puVar2 = PTR__objc_msgSend_024a9998;
      for (uVar13 = 0; uVar9 = (*puVar2)(), uVar13 < uVar9; uVar13 = uVar13 + 1) {
        uVar8 = (*puVar2)(extraout_XMM0_Da_02,uVar12);
        uVar10 = (*puVar2)(extraout_XMM0_Da_03,uVar13);
        uVar10 = (*puVar2)(extraout_XMM0_Da_04,uVar10);
        uVar8 = (*puVar2)(uVar10,uVar8,0,4);
        (*puVar2)(extraout_XMM0_Da_05,uVar8);
      }
      uVar12 = (*PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_02,uVar7);
      plVar11 = local_40;
    }
  }
  else {
    (**(code **)(*local_78 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00e1dc99;
    if (local_78 != (int64_t *)0x0) goto LAB_00e1dcec;
LAB_00e1de16:
    lVar5 = FUN_00e1d9d0();
    if (lVar5 != 0) {
      pplVar14 = &local_68;
      (**(code **)(*plVar1 + 0x3f0))();
      plVar11 = local_68;
      if ((g_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_026d5e58 = FUN_00d4fe50();
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        ___cxa_guard_release();
      }
      if (plVar11 == (int64_t *)0x0) {
LAB_00e1de86:
        pplVar14 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar11 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_00e1de86;
      }
      if (*(char *)(pplVar14 + 1) == '\0') {
        if (*pplVar14 == (int64_t *)0x0) goto LAB_00e1df53;
        FUN_00d50b00();
LAB_00e1df10:
        uVar12 = FUN_00d8d520();
        iVar4 = FUN_00d8c7a0();
        lVar6 = (*PTR__objc_msgSend_024a9998)((int64_t)iVar4,uVar12);
        FUN_00d50b20();
      }
      else {
        *(void*)(pplVar14 + 1) = 0;
        if (*pplVar14 != (int64_t *)0x0) goto LAB_00e1df10;
LAB_00e1df53:
        lVar6 = 0;
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar16 = (**(code **)(*plVar1 + 0x3f8))();
      plVar11 = g_0277cbb0;
      if (g_0277cbb0 == (int64_t *)0x0) {
        bVar15 = local_68 == (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        bVar15 = local_68 == plVar11;
        uVar16 = FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
      uVar12 = 4;
      if (!bVar15) {
        uVar16 = (**(code **)(*plVar1 + 0x3f8))();
        if (g_02704028 != 0) {
          FUN_00d50b00();
          uVar16 = FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
        uVar12 = 7;
      }
      if (lVar6 != 0) {
        uVar7 = (*PTR__objc_msgSend_024a9998)(uVar16,lVar5);
        uVar8 = (*PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_01,lVar6);
        uVar12 = (*PTR__objc_msgSend_024a9998)(uVar8,uVar7,0,uVar12);
        plVar11 = local_40;
        goto joined_r0x00e1e243;
      }
    }
LAB_00e1e079:
    uVar12 = 0;
    plVar11 = local_40;
  }
joined_r0x00e1e243:
  local_40 = plVar11;
  if (local_78 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar11 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  bVar15 = false;
LAB_00e1e259:
  if ((local_31 != '\0') && (!bVar15)) {
    FUN_00d50b20();
  }
  return uVar12;
}

