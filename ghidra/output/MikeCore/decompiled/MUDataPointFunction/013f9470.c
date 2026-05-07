// Function: FUN_013f9470
// Address: 013f9470
// Size: 2707 bytes
// Class: MUDataPointFunction


int * FUN_013f9470(float param_1,longlong *param_2,undefined8 param_3,void *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 in_CL;
  int iVar7;
  pthread_key_t pVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *unaff_RSI;
  int *unaff_RDI;
  longlong *plVar12;
  longlong lVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  longlong local_b8;
  char local_b0;
  undefined4 local_88;
  undefined4 uStack_84;
  char local_80;
  longlong local_58;
  code *local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar8 = 0x25683c0;
  *puVar2 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  FUN_00c8e7d0();
  if ((local_80 != '\0') && (CONCAT44(uStack_84,local_88) != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  iVar11 = *(int *)(local_58 + 0xc);
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  iVar7 = *(int *)(CONCAT44(uStack_84,local_88) + 0xc);
  if (local_80 != '\0') {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (iVar7 <= iVar11) {
    pvVar3 = _pthread_getspecific(pVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    lVar13 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_013f98d7;
      }
    }
    else if (local_58 != 0) {
LAB_013f98d7:
      local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
      local_58 = 0;
      local_48 = lVar13;
      local_40 = 0xffffffff;
      local_38 = 0;
      while( true ) {
        lVar13 = (longlong)(int)local_40;
        iVar11 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar11);
        if (*(int *)(local_48 + 0xc) <= iVar11) break;
        lVar13 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar13 * 8);
        local_58 = lVar13;
        pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
        lVar6 = local_58;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
          lVar13 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        iVar11 = *(int *)(puVar2 + 3);
        FUN_00c8e340();
        *(undefined8 *)(puVar2[2] + (longlong)iVar11) = *(undefined8 *)(lVar13 + 0x38);
        if (local_40._4_4_ != 0) {
          if (local_40 < 0) {
            iVar11 = -local_40._4_4_;
          }
          else {
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar11 = 0;
          }
          local_40 = CONCAT44(iVar11,(int)local_40);
        }
      }
      lVar13 = local_48;
      FUN_01a81420();
      pVar8 = (pthread_key_t)lVar13;
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    lVar13 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 == 0) goto LAB_013f9cef;
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_58 == 0) goto LAB_013f9cef;
    local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
    local_58 = 0;
    local_48 = lVar13;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar11 = -local_40._4_4_;
        }
        else {
          iVar11 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar11);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar11 = 0;
        }
        local_40 = CONCAT44(iVar11,(int)local_40);
      }
      lVar13 = (longlong)(int)local_40;
      iVar11 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar11);
      if (*(int *)(local_48 + 0xc) <= iVar11) break;
      lVar13 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar13 * 8);
      local_58 = lVar13;
      pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
      lVar6 = local_58;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
        lVar13 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      iVar11 = *(int *)(puVar2 + 3);
      lVar6 = (longlong)iVar11;
      iVar7 = iVar11 + 7;
      if (-1 < lVar6) {
        iVar7 = iVar11;
      }
      if (7 < lVar6) {
        iVar7 = iVar7 >> 3;
        lVar4 = 0;
        do {
          dVar15 = *(double *)(puVar2[2] + lVar4 * 8);
          if ((dVar15 == *(double *)(lVar13 + 0x38)) &&
             (!NAN(dVar15) && !NAN(*(double *)(lVar13 + 0x38)))) goto LAB_013f9bff;
          lVar4 = lVar4 + 1;
        } while (iVar7 != (int)lVar4);
      }
      FUN_00c8e340(iVar7,1);
      *(undefined8 *)(puVar2[2] + lVar6) = *(undefined8 *)(lVar13 + 0x38);
LAB_013f9bff:
    }
    FUN_01a81420();
    FUN_00d50b20();
    goto LAB_013f9cef;
  }
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  lVar13 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_013f9762;
    }
  }
  else if (local_58 != 0) {
LAB_013f9762:
    local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
    local_58 = 0;
    local_48 = lVar13;
    local_40 = 0xffffffff;
    local_38 = 0;
    while( true ) {
      lVar13 = (longlong)(int)local_40;
      iVar11 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar11);
      if (*(int *)(local_48 + 0xc) <= iVar11) break;
      lVar13 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar13 * 8);
      local_58 = lVar13;
      pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
      lVar6 = local_58;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
        lVar13 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      iVar11 = *(int *)(puVar2 + 3);
      FUN_00c8e340();
      *(undefined8 *)(puVar2[2] + (longlong)iVar11) = *(undefined8 *)(lVar13 + 0x38);
      if (local_40._4_4_ != 0) {
        if (local_40 < 0) {
          iVar11 = -local_40._4_4_;
        }
        else {
          local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar11 = 0;
        }
        local_40 = CONCAT44(iVar11,(int)local_40);
      }
    }
    lVar13 = local_48;
    FUN_01a81420();
    pVar8 = (pthread_key_t)lVar13;
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  lVar13 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 == 0) goto LAB_013f9cef;
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == 0) goto LAB_013f9cef;
  local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
  local_58 = 0;
  local_48 = lVar13;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_40._4_4_ = 0;
  while( true ) {
    if (local_40._4_4_ != 0) {
      if (local_40._4_4_ < 1) {
        iVar11 = -local_40._4_4_;
      }
      else {
        iVar11 = (int)local_40 - local_40._4_4_;
        local_40 = CONCAT44(local_40._4_4_,iVar11);
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar11 = 0;
      }
      local_40 = CONCAT44(iVar11,(int)local_40);
    }
    lVar13 = (longlong)(int)local_40;
    iVar11 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar11);
    if (*(int *)(local_48 + 0xc) <= iVar11) break;
    lVar13 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar13 * 8);
    local_58 = lVar13;
    pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
    lVar6 = local_58;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
      lVar13 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
    iVar11 = *(int *)(puVar2 + 3);
    lVar6 = (longlong)iVar11;
    iVar7 = iVar11 + 7;
    if (-1 < lVar6) {
      iVar7 = iVar11;
    }
    if (7 < lVar6) {
      iVar7 = iVar7 >> 3;
      lVar4 = 0;
      do {
        dVar15 = *(double *)(puVar2[2] + lVar4 * 8);
        if ((dVar15 == *(double *)(lVar13 + 0x38)) &&
           (!NAN(dVar15) && !NAN(*(double *)(lVar13 + 0x38)))) goto LAB_013f9a9f;
        lVar4 = lVar4 + 1;
      } while (iVar7 != (int)lVar4);
    }
    FUN_00c8e340(iVar7,1);
    *(undefined8 *)(puVar2[2] + lVar6) = *(undefined8 *)(lVar13 + 0x38);
LAB_013f9a9f:
  }
  FUN_01a81420();
  FUN_00d50b20();
LAB_013f9cef:
  local_58 = 0;
  local_50 = FUN_00e8b590;
  plVar9 = &local_58;
  _qsort_r(plVar9,8,0x1708ec0,param_4,unaff_RDI);
  local_58 = CONCAT44(local_58._4_4_,0xffffffff);
  plVar5 = (longlong *)FUN_000bea40();
  (**(code **)(*plVar5 + 0x18))();
  if (7 < *(int *)(puVar2 + 3)) {
    fVar14 = DAT_02390124 - param_1;
    lVar13 = 0;
    do {
      uVar1 = *(undefined8 *)(puVar2[2] + lVar13 * 8);
      pvVar3 = _pthread_getspecific((pthread_key_t)plVar9);
      plVar12 = plVar5;
      if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar9 = plVar5;
        plVar12 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      plVar10 = (longlong *)*unaff_RSI;
      pVar8 = (pthread_key_t)plVar9;
      pvVar3 = _pthread_getspecific(pVar8);
      if (pvVar3 != (void *)0x0) {
        plVar10 = (longlong *)*unaff_RSI;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar10 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      dVar15 = (double)(**(code **)(*plVar10 + 0x3d8))(uVar1,in_CL);
      plVar9 = (longlong *)*param_2;
      pvVar3 = _pthread_getspecific(pVar8);
      if (pvVar3 != (void *)0x0) {
        plVar9 = (longlong *)*param_2;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      dVar16 = (double)(**(code **)(*plVar9 + 0x3d8))(uVar1,in_CL);
      (**(code **)(*plVar12 + 0x418))(uVar1,dVar16 * (double)param_1 + dVar15 * (double)fVar14);
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      iVar11 = *(int *)(puVar2 + 3);
      iVar7 = iVar11 + 7;
      if (-1 < iVar11) {
        iVar7 = iVar11;
      }
      plVar9 = (longlong *)(ulonglong)(uint)(iVar7 >> 3);
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < iVar7 >> 3);
  }
  *(longlong **)unaff_RDI = plVar5;
  *(undefined1 *)(unaff_RDI + 2) = 1;
  FUN_00d50b20();
  return unaff_RDI;
}


