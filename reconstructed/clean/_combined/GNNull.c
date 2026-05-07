// ===================================================================
// GNNull — Complete reconstructed pseudocode
// 13 functions
// ===================================================================


// ============================================================
// 012549c0
// ============================================================
// Function: FUN_012549c0
// Address: 012549c0
// Size: 1800 bytes
// Class: GNNull

void FUN_012549c0(uint64_t param_1,uint64_t param_2,int param_3)

{
  int iVar1;
  uint64_t uVar2;
  bool bVar3;
  uint64_t uVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  void* pVar9;
  int iVar10;
  int64_t *arg1;
  int64_t lVar11;
  uint32_t local_74;
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  char local_48;
  uint64_t local_40;
  char local_38;
  
  local_38 = '\0';
  local_40 = 0;
  local_70 = param_2;
  if (param_3 == 0) {
LAB_01254ecb:
    local_60 = param_1;
    if (((local_70 >> 0x20 != 0) && (param_1 = param_1 >> 0x20, param_1 != 0)) &&
       (cVar5 = FUN_00e7c020(), cVar5 == '\0')) goto LAB_012550b3;
  }
  else {
    local_60 = param_1;
    if (param_2 >> 0x20 != 0) {
      lVar11 = *arg1;
      pvVar7 = _pthread_getspecific((void*)param_1);
      if (pvVar7 != (void *)0x0) {
        lVar11 = *arg1;
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar11 = *(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      iVar6 = FUN_01251eb0();
      if (iVar6 < 1) {
        local_58 = FUN_00e7bdb0();
        lVar8 = *(int64_t *)(lVar11 + 0x48);
      }
      else {
        lVar8 = *(int64_t *)(lVar11 + 0x48);
        local_58 = *(uint64_t *)(*(int64_t *)(lVar8 + 0x10) + (uint64_t)(iVar6 - 1) * 8);
      }
      iVar1 = *(int *)(lVar8 + 0x18);
      iVar10 = iVar1 + 7;
      if (-1 < iVar1) {
        iVar10 = iVar1;
      }
      if (iVar6 < iVar10 >> 3) {
        local_68 = *(uint64_t *)(*(int64_t *)(lVar8 + 0x10) + (int64_t)iVar6 * 8);
      }
      else {
        local_68 = FUN_00e7bdb0();
      }
      cVar5 = local_38;
      uVar4 = local_40;
      uVar2 = *(uint64_t *)
               (*(int64_t *)(*(int64_t *)(lVar11 + 0x50) + 0x10) + (int64_t)iVar6 * 8);
      if (local_40 == uVar2) {
        if ((local_38 == '\0') && (uVar2 != 0)) {
          FUN_00d50b00();
          goto LAB_01254af5;
        }
      }
      else {
        if (uVar2 != 0) {
          FUN_00d50b00();
        }
        local_40 = uVar2;
        if ((cVar5 != '\0') && (uVar4 != 0)) {
          FUN_00d50b20();
        }
LAB_01254af5:
        local_38 = '\x01';
      }
      if (local_40 != 0) {
        FUN_00d51d20();
        cVar5 = local_38;
        uVar4 = local_40;
        uVar2 = local_50;
        if (local_40 == local_50) {
          if ((local_38 != '\0') || (local_50 == 0)) goto LAB_01254b86;
          if (local_48 == '\0') {
            FUN_00d50b00();
            goto LAB_01254b82;
          }
        }
        else {
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            local_40 = uVar2;
            if ((cVar5 != '\0') && (uVar4 != 0)) {
              FUN_00d50b20();
            }
LAB_01254b82:
            local_38 = '\x01';
LAB_01254b86:
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01254b9a;
          }
          local_40 = local_50;
          if ((local_38 != '\0') && (uVar4 != 0)) {
            FUN_00d50b20();
          }
        }
        local_38 = '\x01';
      }
LAB_01254b9a:
      local_50 = local_60;
      if (local_60 >> 0x20 == 0) {
        bVar3 = local_68 >> 0x20 == 0;
      }
      else if ((local_68 >> 0x20 == 0) || (cVar5 = FUN_00e7c020(), cVar5 == '\0')) {
        bVar3 = true;
        local_68 = local_50;
      }
      else {
        bVar3 = false;
      }
      FUN_012502a0(local_68,local_70,1);
      if (bVar3) goto LAB_012550b3;
      local_70 = local_68;
    }
    param_1 = 0;
    if (local_60 >> 0x20 != 0) {
      local_74 = 0xffffffff;
      lVar11 = *arg1;
      pvVar7 = _pthread_getspecific((void*)(local_60 >> 0x20));
      if (pvVar7 != (void *)0x0) {
        lVar11 = *arg1;
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar11 = *(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      iVar6 = FUN_01251eb0();
      if (iVar6 < 1) {
        local_58 = FUN_00e7bdb0();
        lVar8 = *(int64_t *)(lVar11 + 0x48);
      }
      else {
        lVar8 = *(int64_t *)(lVar11 + 0x48);
        local_58 = *(uint64_t *)(*(int64_t *)(lVar8 + 0x10) + (uint64_t)(iVar6 - 1) * 8);
      }
      iVar1 = *(int *)(lVar8 + 0x18);
      iVar10 = iVar1 + 7;
      if (-1 < iVar1) {
        iVar10 = iVar1;
      }
      if (iVar6 < iVar10 >> 3) {
        local_68 = *(uint64_t *)(*(int64_t *)(lVar8 + 0x10) + (int64_t)iVar6 * 8);
      }
      else {
        local_68 = FUN_00e7bdb0();
      }
      cVar5 = local_38;
      uVar4 = local_40;
      pVar9 = (void*)lVar8;
      uVar2 = *(uint64_t *)
               (*(int64_t *)(*(int64_t *)(lVar11 + 0x50) + 0x10) + (int64_t)iVar6 * 8);
      if (local_40 == uVar2) {
        if ((local_38 == '\0') && (uVar2 != 0)) {
          FUN_00d50b00();
          goto LAB_01254d2c;
        }
      }
      else {
        if (uVar2 != 0) {
          FUN_00d50b00();
        }
        local_40 = uVar2;
        if ((cVar5 != '\0') && (uVar4 != 0)) {
          FUN_00d50b20();
        }
LAB_01254d2c:
        local_38 = '\x01';
      }
      if (((local_58._4_4_ != 0) && (local_60._4_4_ != 0)) &&
         (cVar5 = FUN_00e7c000(), cVar5 != '\0')) {
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012535e0(&local_58,&local_40,&local_68,&local_74);
      }
      if (local_40 != 0) {
        FUN_00d51d20();
        cVar5 = local_38;
        uVar4 = local_40;
        uVar2 = local_50;
        if (local_40 == local_50) {
          if ((local_38 != '\0') || (local_50 == 0)) goto LAB_01254e2a;
          if (local_48 == '\0') {
            FUN_00d50b00();
            goto LAB_01254e26;
          }
        }
        else {
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            local_40 = uVar2;
            if ((cVar5 != '\0') && (uVar4 != 0)) {
              FUN_00d50b20();
            }
LAB_01254e26:
            local_38 = '\x01';
LAB_01254e2a:
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01254e3e;
          }
          local_40 = local_50;
          if ((local_38 != '\0') && (uVar4 != 0)) {
            FUN_00d50b20();
          }
        }
        local_38 = '\x01';
      }
LAB_01254e3e:
      local_50 = local_70;
      if (local_70 >> 0x20 == 0) {
        bVar3 = local_58 >> 0x20 == 0;
      }
      else if ((local_58 >> 0x20 == 0) || (cVar5 = FUN_00e7c020(), cVar5 == '\0')) {
        bVar3 = true;
        local_58 = local_50;
      }
      else {
        bVar3 = false;
      }
      FUN_012502a0(local_60,local_58,1);
      param_1 = local_58;
      if (bVar3) goto LAB_012550b3;
      goto LAB_01254ecb;
    }
  }
  local_74 = 0xffffffff;
  while( true ) {
    pvVar7 = _pthread_getspecific((void*)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar5 = FUN_01252960(local_60,local_70,&local_40,&local_58);
    if (cVar5 == '\0') break;
    if (local_40 != 0) {
      FUN_00d51d20();
      cVar5 = local_38;
      uVar4 = local_40;
      uVar2 = local_50;
      if (local_40 == local_50) {
        if ((local_38 != '\0') || (local_50 == 0)) goto LAB_01255038;
        if (local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_01255034;
        }
      }
      else {
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
          local_40 = uVar2;
          if ((cVar5 != '\0') && (uVar4 != 0)) {
            FUN_00d50b20();
          }
LAB_01255034:
          local_38 = '\x01';
LAB_01255038:
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01255050;
        }
        local_40 = local_50;
        if ((local_38 != '\0') && (uVar4 != 0)) {
          FUN_00d50b20();
        }
      }
      local_38 = '\x01';
    }
LAB_01255050:
    if ((local_70 >> 0x20 != 0) &&
       ((local_58._4_4_ == 0 || (cVar5 = FUN_00e7c020(), cVar5 != '\0')))) {
      local_58 = local_70;
    }
    if ((local_60 >> 0x20 != 0) &&
       ((local_68._4_4_ == 0 || (cVar5 = FUN_00e7c020(), cVar5 != '\0')))) {
      local_68 = local_60;
    }
    param_1 = local_68;
    FUN_012502a0(local_68,local_58,0);
  }
LAB_012550b3:
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01252f30
// ============================================================
// Function: FUN_01252f30
// Address: 01252f30
// Size: 1595 bytes
// Class: GNNull

bool FUN_01252f30(int64_t *param_1,double param_2,void*param_3,int *param_4)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int iVar8;
  uint uVar9;
  void*in_RCX;
  void*puVar10;
  int iVar11;
  uint uVar12;
  int64_t *in_RDX;
  int iVar13;
  uint uVar14;
  char unaff_SIL;
  int64_t this_ptr;
  int iVar15;
  int iVar16;
  uint64_t uVar17;
  int64_t *plVar18;
  bool bVar19;
  double dVar20;
  uint64_t local_a8;
  void*local_a0;
  double local_98;
  double local_90;
  int64_t local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  void*local_58;
  int *local_50;
  int64_t *local_48;
  char local_3c;
  
  local_48 = param_1;
  local_60 = param_1;
  local_90 = param_2;
  local_98 = param_2;
  local_50 = param_4;
  iVar1 = *param_4;
  if ((int64_t)iVar1 == -2) goto LAB_012534d5;
  local_78 = '\0';
  local_80 = 0;
  plVar18 = &local_80;
  if (in_RDX != (int64_t *)0x0) {
    plVar18 = in_RDX;
  }
  local_a0 = param_3;
  if (param_3 == (void*)0x0) {
    param_3 = &local_a8;
  }
  local_58 = param_3;
  local_3c = unaff_SIL;
  if (iVar1 == -1) {
    if (!NAN((double)param_1)) {
      local_70 = FUN_00e7bdb0();
      dVar20 = (double)FUN_00e7c860();
      if (dVar20 <= (double)local_48) {
        FUN_012523c0(local_60,local_3c,local_58,local_50);
        lVar3 = local_70;
        lVar6 = *plVar18;
        if (lVar6 == local_70) {
          if (((char)plVar18[1] == '\0') && (local_70 != 0)) {
            plVar2 = plVar18 + 1;
            if (local_68 == '\0') {
              FUN_00d50b00();
            }
            goto LAB_012534f4;
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_88 = lVar6;
          local_48 = plVar18 + 1;
          lVar4 = plVar18[1];
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
            *plVar18 = lVar3;
            plVar2 = local_48;
            if (((char)lVar4 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
              plVar2 = local_48;
            }
          }
          else {
            *plVar18 = local_70;
            plVar2 = local_48;
            if (((char)lVar4 != '\0') && (lVar6 != 0)) {
              FUN_00d50b20();
              plVar2 = local_48;
            }
          }
LAB_012534f4:
          local_48 = plVar2;
          *(void*)local_48 = 1;
        }
        if (((in_RCX != (void*)0x0) && (local_3c != '\0')) &&
           ((*(int *)((int64_t)in_RCX + 4) == 0 ||
            ((!NAN((double)local_60) && (cVar5 = FUN_00e7c790(), cVar5 == '\0')))))) {
          local_48 = local_60;
          FUN_00e7bcc0();
          uVar7 = FUN_00e7cd00(local_48);
          *in_RCX = uVar7;
        }
        goto LAB_0125339f;
      }
    }
    *local_50 = 0;
    if (local_3c == '\0') {
      lVar6 = *(int64_t *)(this_ptr + 0x48);
      uVar9 = *(uint *)(lVar6 + 0x18);
      uVar17 = 0;
      uVar14 = 0;
    }
    else {
      if (**(int64_t **)(*(int64_t *)(this_ptr + 0x50) + 0x10) == 0) {
        *local_50 = 1;
      }
      lVar6 = *(int64_t *)(this_ptr + 0x48);
      uVar9 = *(uint *)(lVar6 + 0x18);
      uVar17 = 0;
      if ((int)uVar9 < 8) {
        uVar14 = 0;
      }
      else {
        plVar2 = *(int64_t **)(*(int64_t *)(this_ptr + 0x50) + 0x10);
        lVar3 = *plVar2;
        bVar19 = lVar3 == 0;
        uVar17 = (uint64_t)bVar19;
        uVar14 = (uint)bVar19;
        if ((uVar14 < uVar9 >> 3) && (uVar14 = (lVar3 == 0) + 1, plVar2[uVar14] != 0)) {
          uVar14 = (uint)bVar19;
        }
      }
    }
    if (in_RCX != (void*)0x0) {
      uVar7 = FUN_00e7bdb0();
      *in_RCX = uVar7;
      lVar6 = *(int64_t *)(this_ptr + 0x48);
      uVar9 = *(uint *)(lVar6 + 0x18);
    }
    uVar12 = uVar9 + 7;
    if (-1 < (int)uVar9) {
      uVar12 = uVar9;
    }
    if ((int)uVar14 < (int)uVar12 >> 3) {
      uVar7 = *(void*)(*(int64_t *)(lVar6 + 0x10) + (uint64_t)uVar14 * 8);
    }
    else {
      uVar7 = FUN_00e7bdb0();
    }
    *local_58 = uVar7;
    lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + uVar17 * 8);
    lVar3 = *plVar18;
    lVar4 = plVar18[1];
    if (lVar3 == lVar6) {
      if (((char)lVar4 != '\0') || (lVar6 == 0)) goto LAB_0125339f;
      FUN_00d50b00();
    }
    else {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *plVar18 = lVar6;
      if (((char)lVar4 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_0125339a:
    *(void*)(plVar18 + 1) = 1;
  }
  else {
    lVar6 = *(int64_t *)(this_ptr + 0x48);
    iVar15 = *(int *)(lVar6 + 0x18);
    iVar8 = iVar15 + 7;
    if (-1 < iVar15) {
      iVar8 = iVar15;
    }
    iVar8 = iVar8 >> 3;
    iVar13 = iVar1;
    iVar16 = iVar1;
    iVar11 = iVar1;
    if ((unaff_SIL != '\0') && (7 < iVar15)) {
      plVar2 = *(int64_t **)(*(int64_t *)(this_ptr + 0x50) + 0x10);
      if (plVar2[iVar1] == 0) {
        if (iVar1 != 0) {
          iVar13 = iVar1 + -1;
          goto LAB_01253009;
        }
        iVar16 = 1;
        iVar15 = 0;
LAB_0125328e:
        iVar11 = 0;
        if (*plVar2 != 0) {
          iVar11 = iVar15;
        }
        iVar13 = 1;
        if (iVar8 < 2) goto LAB_01253035;
      }
      else {
LAB_01253009:
        iVar15 = 1;
        if (iVar13 == 1) goto LAB_0125328e;
        iVar11 = iVar13;
        if (iVar8 <= iVar13) goto LAB_01253035;
      }
      if (plVar2[(int64_t)iVar13 + 1] == 0) {
        iVar16 = iVar13 + 1;
      }
    }
LAB_01253035:
    if (in_RCX != (void*)0x0) {
      if (iVar11 < 1) {
        uVar7 = FUN_00e7bdb0();
      }
      else {
        uVar7 = *(void*)(*(int64_t *)(lVar6 + 0x10) + (uint64_t)(iVar11 - 1) * 8);
      }
      *in_RCX = uVar7;
      lVar6 = *(int64_t *)(this_ptr + 0x48);
      iVar15 = *(int *)(lVar6 + 0x18);
      iVar8 = iVar15 + 7;
      if (-1 < iVar15) {
        iVar8 = iVar15;
      }
      iVar8 = iVar8 >> 3;
    }
    if (iVar16 < iVar8) {
      uVar7 = *(void*)(*(int64_t *)(lVar6 + 0x10) + (int64_t)iVar16 * 8);
    }
    else {
      uVar7 = FUN_00e7bdb0();
    }
    *local_58 = uVar7;
    lVar6 = *(int64_t *)
             (*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + (int64_t)iVar13 * 8);
    lVar3 = *plVar18;
    lVar4 = plVar18[1];
    if (lVar3 != lVar6) {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *plVar18 = lVar6;
      if (((char)lVar4 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0125339a;
    }
    if (((char)lVar4 == '\0') && (lVar6 != 0)) {
      FUN_00d50b00();
      goto LAB_0125339a;
    }
  }
LAB_0125339f:
  if (NAN(local_90)) {
LAB_012533d7:
    iVar15 = *(int *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
    iVar8 = iVar15 + 7;
    if (-1 < iVar15) {
      iVar8 = iVar15;
    }
    iVar15 = *local_50;
    iVar13 = -2;
    if (iVar15 == iVar8 >> 3) goto LAB_012534bf;
    *local_50 = iVar15 + 1;
    if ((local_3c != '\0') &&
       (*(int64_t *)
         (*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + 8 + (int64_t)iVar15 * 8) == 0)) {
      iVar13 = -2;
      if (iVar15 + 1 != iVar8 >> 3) {
        iVar13 = iVar15 + 2;
      }
      goto LAB_012534bf;
    }
  }
  else {
    local_70 = FUN_00e7bdb0();
    dVar20 = (double)FUN_00e7c860();
    if (dVar20 < local_90) goto LAB_012533d7;
    if (*(int *)((int64_t)local_58 + 4) != 0) {
      puVar10 = &local_a8;
      if (local_a0 != (void*)0x0) {
        puVar10 = local_a0;
      }
      if ((*(int *)((int64_t)puVar10 + 4) == 0) || (cVar5 = FUN_00e7c790(), cVar5 == '\0'))
      goto LAB_012533d7;
    }
    dVar20 = local_98;
    iVar13 = -2;
    if (local_3c != '\0') {
      FUN_00e7bcc0();
      uVar7 = FUN_00e7cd00(dVar20);
      *local_58 = uVar7;
    }
LAB_012534bf:
    *local_50 = iVar13;
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
LAB_012534d5:
  return iVar1 != -2;
}



// ============================================================
// 01253c10
// ============================================================
// Function: FUN_01253c10
// Address: 01253c10
// Size: 1480 bytes
// Class: GNNull

uint64_t FUN_01253c10(uint64_t *param_1,int64_t *param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int iVar9;
  char unaff_SIL;
  int64_t this_ptr;
  uint uVar10;
  int64_t lVar11;
  int iVar12;
  int64_t lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iStack_4c;
  
  uVar5 = *(uint *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
  uVar10 = uVar5;
  if ((int)uVar5 < 0) {
    uVar10 = uVar5 + 7;
  }
  if ((0xe < uVar5 + 7) && (uVar8 = *param_3, uVar8 >> 0x20 != 0)) {
    uVar10 = (int)uVar10 >> 3;
    if ((int)uVar5 < 8) {
      uVar6 = FUN_00e7bdb0();
    }
    else {
      uVar6 = *(uint64_t *)
               (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + (uint64_t)(uVar10 - 1) * 8)
      ;
    }
    if ((uVar6 >> 0x20 == 0) || (cVar4 = FUN_00e7c020(), cVar4 == '\0')) {
      uVar5 = FUN_01251eb0();
      uVar6 = (uint64_t)uVar5;
      iStack_4c = (int)(uVar8 >> 0x20);
      if (unaff_SIL == '\0') {
        lVar13 = *(int64_t *)(this_ptr + 0x48);
        if (param_1 != (uint64_t *)0x0) {
          if ((int)uVar5 < 1) {
            uVar8 = FUN_00e7bdb0();
          }
          else {
            uVar8 = *(uint64_t *)(*(int64_t *)(lVar13 + 0x10) + (uint64_t)(uVar5 - 1) * 8);
          }
          *param_1 = uVar8;
          lVar13 = *(int64_t *)(this_ptr + 0x48);
        }
        iVar15 = *(int *)(lVar13 + 0x18);
        iVar9 = iVar15 + 7;
        if (-1 < iVar15) {
          iVar9 = iVar15;
        }
        if ((int)uVar5 < iVar9 >> 3) {
          uVar8 = *(uint64_t *)(*(int64_t *)(lVar13 + 0x10) + (int64_t)(int)uVar5 * 8);
        }
        else {
          uVar8 = FUN_00e7bdb0();
        }
        *param_3 = uVar8;
        lVar13 = *(int64_t *)
                  (*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + (int64_t)(int)uVar5 * 8)
        ;
        if (lVar13 == 0) {
          lVar13 = 0;
          iVar15 = *(int *)((int64_t)param_1 + 4);
        }
        else {
          iVar15 = *(int *)((int64_t)param_1 + 4);
        }
        if (((iVar15 != 0) && (iStack_4c != 0)) && (cVar4 = FUN_00e7c020(), cVar4 != '\0')) {
          if ((int)uVar5 < 0) {
            uVar8 = FUN_00e7bdb0();
          }
          else {
            uVar8 = *(uint64_t *)
                     (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + uVar6 * 8);
          }
          iVar14 = uVar5 + 1;
          *param_1 = uVar8;
          iVar15 = *(int *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
          iVar9 = iVar15 + 7;
          if (-1 < iVar15) {
            iVar9 = iVar15;
          }
          if (iVar14 < iVar9 >> 3) {
            uVar8 = *(uint64_t *)
                     (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + (int64_t)iVar14 * 8);
          }
          else {
            uVar8 = FUN_00e7bdb0();
          }
          *param_3 = uVar8;
          lVar11 = *(int64_t *)
                    (*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + (int64_t)iVar14 * 8);
          if (lVar13 != lVar11) {
            lVar13 = lVar11;
          }
        }
        uVar8 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
        if (param_2 != (int64_t *)0x0) {
          lVar11 = *param_2;
          if (lVar11 == lVar13) {
            if (((char)param_2[1] == '\0') && (lVar13 != 0)) {
              FUN_00d50b00();
              *(void*)(param_2 + 1) = 1;
            }
          }
          else {
            lVar3 = param_2[1];
            if (lVar13 != 0) {
              FUN_00d50b00();
            }
            *param_2 = lVar13;
            if (((char)lVar3 != '\0') && (lVar11 != 0)) {
              FUN_00d50b20();
            }
LAB_012541ad:
            *(void*)(param_2 + 1) = 1;
          }
        }
      }
      else {
        uVar1 = *param_1;
        lVar13 = (int64_t)(int)uVar5;
        if ((int)uVar5 < (int)uVar10) {
          uVar5 = uVar10;
        }
        lVar11 = 0;
        do {
          iVar15 = *(int *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
          iVar9 = iVar15 + 7;
          if (-1 < iVar15) {
            iVar9 = iVar15;
          }
          iVar12 = (int)lVar13;
          iVar14 = iVar12;
          iVar16 = iVar12;
          if (7 < iVar15) {
            plVar2 = *(int64_t **)(*(int64_t *)(this_ptr + 0x50) + 0x10);
            if (plVar2[lVar13] == 0) {
              if (lVar13 != 0) {
                iVar14 = (int)uVar6 + -1;
                if (iVar14 != 1) goto LAB_01253d8a;
                goto LAB_01253d61;
              }
              iVar12 = 1;
              iVar14 = 0;
LAB_01253d9e:
              if (*plVar2 == 0) {
                iVar14 = 0;
              }
              iVar16 = 1;
              iVar15 = 1;
              if (iVar9 >> 3 < 2) goto LAB_01253dc5;
            }
            else {
              if (iVar12 == 1) {
LAB_01253d61:
                iVar14 = 1;
                goto LAB_01253d9e;
              }
LAB_01253d8a:
              iVar16 = iVar14;
              iVar15 = iVar14;
              if (iVar9 >> 3 <= iVar14) goto LAB_01253dc5;
            }
            iVar16 = iVar15;
            if (plVar2[(int64_t)iVar15 + 1] == 0) {
              iVar12 = iVar15 + 1;
            }
          }
LAB_01253dc5:
          if (iVar14 < 1) {
            uVar7 = FUN_00e7bdb0();
          }
          else {
            uVar7 = *(uint64_t *)
                     (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) +
                     (uint64_t)(iVar14 - 1) * 8);
          }
          *param_1 = uVar7;
          iVar15 = *(int *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
          iVar9 = iVar15 + 7;
          if (-1 < iVar15) {
            iVar9 = iVar15;
          }
          if (iVar12 < iVar9 >> 3) {
            uVar7 = *(uint64_t *)
                     (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + (int64_t)iVar12 * 8);
          }
          else {
            uVar7 = FUN_00e7bdb0();
          }
          *param_3 = uVar7;
          lVar3 = *(int64_t *)
                   (*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + (int64_t)iVar16 * 8);
          if (lVar11 != lVar3) {
            lVar11 = lVar3;
          }
          if ((*(int *)((int64_t)param_3 + 4) == 0) ||
             ((iStack_4c != 0 && (cVar4 = FUN_00e7c020(), cVar4 != '\0')))) {
            if ((*(int *)((int64_t)param_1 + 4) == 0) ||
               ((iStack_4c != 0 && (cVar4 = FUN_00e7c020(), cVar4 != '\0')))) {
              *param_1 = uVar8;
            }
            uVar8 = CONCAT71((int7)((uint64_t)lVar3 >> 8),1);
            if (param_2 == (int64_t *)0x0) goto LAB_01253c91;
            lVar13 = *param_2;
            if (lVar13 == lVar11) {
              if (((char)param_2[1] == '\0') && (lVar11 != 0)) {
                FUN_00d50b00();
                *(void*)(param_2 + 1) = 1;
              }
              goto LAB_01253c91;
            }
            lVar3 = param_2[1];
            if (lVar11 != 0) {
              FUN_00d50b00();
            }
            *param_2 = lVar11;
            if (((char)lVar3 != '\0') && (lVar13 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_012541ad;
          }
          lVar13 = lVar13 + 1;
          uVar6 = (uint64_t)((int)uVar6 + 1);
        } while (uVar5 + 1 != (int)lVar13);
        *param_1 = uVar1;
        *param_3 = uVar8;
        uVar8 = 0;
      }
      goto LAB_01253c91;
    }
  }
  uVar8 = 0;
LAB_01253c91:
  return uVar8 & 0xffffffff;
}



// ============================================================
// 01252960
// ============================================================
// Function: FUN_01252960
// Address: 01252960
// Size: 1389 bytes
// Class: GNNull

bool FUN_01252960(uint64_t param_1,uint64_t param_2,int64_t *param_3,uint64_t *param_4)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int iVar9;
  uint uVar10;
  uint64_t *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  char unaff_SIL;
  int64_t this_ptr;
  int iVar16;
  int64_t *plVar17;
  int iVar18;
  bool bVar19;
  uint64_t *local_res8;
  int *local_res10;
  uint64_t local_98;
  int64_t local_90;
  char local_88;
  uint64_t local_80;
  uint64_t local_78;
  int64_t local_70;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  int64_t *local_50;
  uint64_t *local_48;
  
  local_58 = param_2;
  local_80 = param_1;
  local_78 = param_1;
  iVar1 = *local_res10;
  if ((int64_t)iVar1 == -2) goto LAB_01252e63;
  local_60 = '\0';
  local_68 = 0;
  plVar17 = &local_68;
  if (param_3 != (int64_t *)0x0) {
    plVar17 = param_3;
  }
  local_48 = local_res8;
  if (local_res8 == (uint64_t *)0x0) {
    local_48 = &local_98;
  }
  if (iVar1 == -1) {
    if (param_2 >> 0x20 == 0) {
      *local_res10 = 0;
      if (unaff_SIL == '\0') {
        lVar6 = *(int64_t *)(this_ptr + 0x48);
        uVar10 = *(uint *)(lVar6 + 0x18);
        uVar7 = 0;
        uVar15 = 0;
      }
      else {
        if (**(int64_t **)(*(int64_t *)(this_ptr + 0x50) + 0x10) == 0) {
          *local_res10 = 1;
        }
        lVar6 = *(int64_t *)(this_ptr + 0x48);
        uVar10 = *(uint *)(lVar6 + 0x18);
        uVar7 = 0;
        if ((int)uVar10 < 8) {
          uVar15 = 0;
        }
        else {
          plVar2 = *(int64_t **)(*(int64_t *)(this_ptr + 0x50) + 0x10);
          lVar3 = *plVar2;
          bVar19 = lVar3 == 0;
          uVar7 = (uint64_t)bVar19;
          uVar15 = (uint)bVar19;
          if ((uVar15 < uVar10 >> 3) && (uVar15 = (lVar3 == 0) + 1, plVar2[uVar15] != 0)) {
            uVar15 = (uint)bVar19;
          }
        }
      }
      if (param_4 != (uint64_t *)0x0) {
        uVar8 = FUN_00e7bdb0();
        *param_4 = uVar8;
        lVar6 = *(int64_t *)(this_ptr + 0x48);
        uVar10 = *(uint *)(lVar6 + 0x18);
      }
      uVar13 = uVar10 + 7;
      if (-1 < (int)uVar10) {
        uVar13 = uVar10;
      }
      if ((int)uVar15 < (int)uVar13 >> 3) {
        uVar8 = *(uint64_t *)(*(int64_t *)(lVar6 + 0x10) + (uint64_t)uVar15 * 8);
      }
      else {
        uVar8 = FUN_00e7bdb0();
      }
      *local_48 = uVar8;
      lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + uVar7 * 8);
      lVar3 = *plVar17;
      lVar4 = plVar17[1];
      if (lVar3 == lVar6) {
        if (((char)lVar4 != '\0') || (lVar6 == 0)) goto LAB_01252da5;
        FUN_00d50b00();
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        *plVar17 = lVar6;
        if (((char)lVar4 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_01252da0;
    }
    FUN_012521f0(param_2,unaff_SIL,param_4,local_48);
    lVar6 = *plVar17;
    if (lVar6 == local_90) {
      if (((char)plVar17[1] == '\0') && (local_90 != 0)) {
        if (local_88 == '\0') {
          FUN_00d50b00();
          local_50 = plVar17 + 1;
        }
        else {
          local_50 = plVar17 + 1;
        }
        goto LAB_01252e82;
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = lVar6;
      local_50 = plVar17 + 1;
      lVar3 = plVar17[1];
      if (local_88 == '\0') {
        if (local_90 != 0) {
          FUN_00d50b00();
        }
        *plVar17 = local_90;
        if (((char)lVar3 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *plVar17 = local_90;
        if (((char)lVar3 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_01252e82:
      *(void*)local_50 = 1;
    }
    if (((param_4 != (uint64_t *)0x0) && (unaff_SIL != '\0')) &&
       ((*(int *)((int64_t)param_4 + 4) == 0 ||
        ((local_58._4_4_ != 0 && (cVar5 = FUN_00e7c020(), cVar5 != '\0')))))) {
      *param_4 = local_58;
    }
  }
  else {
    lVar6 = *(int64_t *)(this_ptr + 0x48);
    iVar16 = *(int *)(lVar6 + 0x18);
    iVar9 = iVar16 + 7;
    if (-1 < iVar16) {
      iVar9 = iVar16;
    }
    iVar9 = iVar9 >> 3;
    iVar14 = iVar1;
    iVar18 = iVar1;
    iVar12 = iVar1;
    if ((unaff_SIL != '\0') && (7 < iVar16)) {
      plVar2 = *(int64_t **)(*(int64_t *)(this_ptr + 0x50) + 0x10);
      if (plVar2[iVar1] == 0) {
        if (iVar1 != 0) {
          iVar14 = iVar1 + -1;
          goto LAB_01252a26;
        }
        iVar18 = 1;
        iVar16 = 0;
LAB_01252c91:
        iVar12 = 0;
        if (*plVar2 != 0) {
          iVar12 = iVar16;
        }
        iVar14 = 1;
        if (iVar9 < 2) goto LAB_01252a52;
      }
      else {
LAB_01252a26:
        iVar16 = 1;
        if (iVar14 == 1) goto LAB_01252c91;
        iVar12 = iVar14;
        if (iVar9 <= iVar14) goto LAB_01252a52;
      }
      if (plVar2[(int64_t)iVar14 + 1] == 0) {
        iVar18 = iVar14 + 1;
      }
    }
LAB_01252a52:
    if (param_4 != (uint64_t *)0x0) {
      if (iVar12 < 1) {
        uVar7 = FUN_00e7bdb0();
      }
      else {
        uVar7 = *(uint64_t *)(*(int64_t *)(lVar6 + 0x10) + (uint64_t)(iVar12 - 1) * 8);
      }
      *param_4 = uVar7;
      lVar6 = *(int64_t *)(this_ptr + 0x48);
      iVar16 = *(int *)(lVar6 + 0x18);
      iVar9 = iVar16 + 7;
      if (-1 < iVar16) {
        iVar9 = iVar16;
      }
      iVar9 = iVar9 >> 3;
    }
    if (iVar18 < iVar9) {
      uVar7 = *(uint64_t *)(*(int64_t *)(lVar6 + 0x10) + (int64_t)iVar18 * 8);
    }
    else {
      uVar7 = FUN_00e7bdb0();
    }
    *local_48 = uVar7;
    lVar6 = *(int64_t *)
             (*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + (int64_t)iVar14 * 8);
    lVar3 = *plVar17;
    lVar4 = plVar17[1];
    if (lVar3 == lVar6) {
      if (((char)lVar4 != '\0') || (lVar6 == 0)) goto LAB_01252da5;
      FUN_00d50b00();
    }
    else {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *plVar17 = lVar6;
      if (((char)lVar4 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_01252da0:
    *(void*)(plVar17 + 1) = 1;
  }
LAB_01252da5:
  local_80 = local_80 >> 0x20;
  if (local_80 == 0) {
LAB_01252ddf:
    iVar16 = *(int *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
    iVar9 = iVar16 + 7;
    if (-1 < iVar16) {
      iVar9 = iVar16;
    }
    iVar16 = *local_res10;
    iVar14 = -2;
    if (iVar16 == iVar9 >> 3) goto LAB_01252e4d;
    *local_res10 = iVar16 + 1;
    if ((unaff_SIL != '\0') &&
       (*(int64_t *)
         (*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + 8 + (int64_t)iVar16 * 8) == 0)) {
      iVar14 = -2;
      if (iVar16 + 1 != iVar9 >> 3) {
        iVar14 = iVar16 + 2;
      }
      goto LAB_01252e4d;
    }
  }
  else {
    if (*(int *)((int64_t)local_48 + 4) != 0) {
      puVar11 = &local_98;
      if (local_res8 != (uint64_t *)0x0) {
        puVar11 = local_res8;
      }
      if ((*(int *)((int64_t)puVar11 + 4) == 0) || (cVar5 = FUN_00e7c020(), cVar5 != '\0'))
      goto LAB_01252ddf;
    }
    iVar14 = -2;
    if (unaff_SIL != '\0') {
      *local_48 = local_78;
    }
LAB_01252e4d:
    *local_res10 = iVar14;
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
LAB_01252e63:
  return iVar1 != -2;
}



// ============================================================
// 01254260
// ============================================================
// Function: FUN_01254260
// Address: 01254260
// Size: 1542 bytes
// Class: GNNull

uint64_t FUN_01254260(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  void* pVar9;
  uint64_t uVar10;
  int iVar11;
  uint64_t unaff_RBX;
  int64_t lVar12;
  undefined7 uVar13;
  uint7 uVar14;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar15;
  uint64_t uVar16;
  uint64_t local_d0;
  uint64_t local_c8;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  uint64_t local_a0;
  uint32_t local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  uint32_t local_6c;
  int64_t local_68;
  char local_60;
  uint32_t local_54;
  int iStack_4c;
  uint64_t local_40;
  
  lVar15 = *arg1;
  if (lVar15 == this_ptr) {
    uVar10 = CONCAT71((int7)(unaff_RBX >> 8),1);
    goto LAB_0125485b;
  }
  pVar9 = (void*)(param_1 >> 0x20);
  uVar10 = param_1;
  if ((param_2 >> 0x20 != 0) || (uVar10 = param_1 >> 0x20, uVar10 != 0)) {
    local_54 = 0xffffffff;
    local_6c = 0xffffffff;
    local_b0 = '\0';
    local_b8 = 0;
    uVar16 = 0;
    lVar15 = 0;
    local_c8 = param_2;
LAB_01254498:
    pvVar6 = _pthread_getspecific((void*)uVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_01252960(param_1,local_c8,&local_b8,&local_d0);
    uVar13 = (undefined7)(unaff_RBX >> 8);
    if (cVar4 == '\0') {
      uVar10 = CONCAT71(uVar13,1);
joined_r0x012547f4:
      cVar4 = (char)uVar16;
      goto joined_r0x012547f4;
    }
    cVar4 = (char)uVar16;
    if (local_d0 >> 0x20 == 0) {
      local_54 = 0;
      FUN_00e7bdb0();
      if (*(int *)(*(int64_t *)(this_ptr + 0x48) + 0x18) < 8) {
        local_40 = FUN_00e7bdb0();
      }
      else {
        local_40 = **(uint64_t **)(*(int64_t *)(this_ptr + 0x48) + 0x10);
      }
      lVar7 = **(int64_t **)(*(int64_t *)(this_ptr + 0x50) + 0x10);
      if (lVar15 == lVar7) {
        if ((cVar4 != '\0') || (lVar15 == 0)) goto LAB_01254733;
        unaff_RBX = CONCAT71(uVar13,1);
        FUN_00d50b00();
        lVar7 = lVar15;
      }
      else {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        unaff_RBX = CONCAT71(uVar13,1);
        if ((cVar4 != '\0') && (lVar15 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_01254680:
      lVar15 = lVar7;
      if (iStack_4c != 0) goto LAB_01254692;
LAB_01254750:
      uVar10 = local_40 >> 0x20;
      if (uVar10 != 0) {
        if (pVar9 != 0) {
          cVar4 = FUN_00e7c020();
          goto LAB_0125476f;
        }
LAB_012547d6:
        unaff_RBX = unaff_RBX & 0xffffffff;
joined_r0x01254836:
        cVar4 = (char)unaff_RBX;
        uVar10 = 0;
joined_r0x012547f4:
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((cVar4 != '\0') && (lVar15 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0125485b;
      }
    }
    else {
      iVar5 = FUN_01251eb0();
      if (iVar5 < 1) {
        FUN_00e7bdb0();
      }
      iVar1 = *(int *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
      iVar11 = iVar1 + 7;
      if (-1 < iVar1) {
        iVar11 = iVar1;
      }
      if (iVar5 < iVar11 >> 3) {
        local_40 = *(uint64_t *)
                    (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + (int64_t)iVar5 * 8);
      }
      else {
        local_40 = FUN_00e7bdb0();
      }
      lVar7 = *(int64_t *)
               (*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + (int64_t)iVar5 * 8);
      uVar14 = (uint7)(uint3)((uint)iVar5 >> 8);
      if (lVar15 != lVar7) {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        unaff_RBX = CONCAT71(uVar14,1);
        if ((cVar4 != '\0') && (lVar15 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01254680;
      }
      if ((cVar4 == '\0') && (lVar15 != 0)) {
        unaff_RBX = CONCAT71(uVar14,1);
        FUN_00d50b00();
        lVar7 = lVar15;
        goto LAB_01254680;
      }
LAB_01254733:
      unaff_RBX = uVar16;
      if (iStack_4c == 0) goto LAB_01254750;
LAB_01254692:
      uVar10 = local_40 >> 0x20;
      if (uVar10 == 0) {
        if (pVar9 == 0) goto LAB_012547d6;
        if (iStack_4c != 0) {
          cVar4 = FUN_00e7c020();
LAB_0125476f:
          if (cVar4 != '\0') goto LAB_012547d6;
        }
      }
      else if ((iStack_4c == 0) || (cVar4 = FUN_00e7c000(), cVar4 == '\0')) {
        if ((param_1 >> 0x20 == 0) ||
           (((local_40._4_4_ != 0 && (pVar9 != 0)) && (cVar4 = FUN_00e7c020(), cVar4 != '\0'))))
        goto LAB_012547d6;
        if ((iStack_4c != 0) && (pVar9 != 0)) {
          cVar4 = FUN_00e7c020();
          goto LAB_0125476f;
        }
      }
    }
    if (local_b8 != lVar15) {
      if (lVar15 == 0) {
        lVar15 = 0;
        uVar16 = unaff_RBX & 0xffffffff;
        uVar10 = 0;
        goto joined_r0x012547f4;
      }
      unaff_RBX = unaff_RBX & 0xffffffff;
      if (local_b8 == 0) goto joined_r0x01254836;
      local_80 = local_b8;
      local_78 = '\0';
      cVar4 = FUN_00d51e10();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') goto LAB_012547d6;
    }
    uVar16 = unaff_RBX & 0xffffffff;
    goto LAB_01254498;
  }
  plVar2 = *(int64_t **)(this_ptr + 0x48);
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    lVar15 = *arg1;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar15 = *(int64_t *)(lVar15 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  local_60 = 0;
  lVar15 = *(int64_t *)(lVar15 + 0x48);
  if (lVar15 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar15;
  cVar4 = (**(code **)(*plVar2 + 0x50))();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    uVar10 = 0;
    goto LAB_0125485b;
  }
  lVar15 = *(int64_t *)(this_ptr + 0x50);
  if (lVar15 == 0) {
LAB_0125480e:
    iVar5 = 0;
  }
  else {
    local_b0 = 0;
    local_b8 = 0;
    local_98 = 0;
    local_a0 = 0;
    local_a8 = lVar15;
    if (0 < *(int *)(lVar15 + 0xc)) {
      lVar7 = 0;
      do {
        lVar3 = *(int64_t *)(*(int64_t *)(lVar15 + 0x10) + lVar7 * 8);
        lVar12 = *arg1;
        local_b8 = lVar3;
        pvVar6 = _pthread_getspecific((void*)uVar10);
        if (pvVar6 != (void *)0x0) {
          lVar12 = *arg1;
          lVar8 = FUN_00e8b990();
          if (lVar8 != 0) {
            lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
        }
        lVar12 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar12 + 0x50) + 0x10) + lVar7 * 8);
        if (lVar3 != lVar12) {
          iVar5 = 1;
          if ((lVar3 == 0) || (lVar12 == 0)) goto LAB_012547fd;
          local_88 = '\0';
          local_90 = lVar12;
          cVar4 = FUN_00d51e10();
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            iVar5 = 1;
            FUN_00083b20();
            goto LAB_01254810;
          }
        }
        lVar7 = lVar7 + 1;
        local_a0 = CONCAT44(local_a0._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar15 + 0xc));
    }
    iVar5 = 2;
LAB_012547fd:
    FUN_00083b20();
    if (iVar5 == 2) goto LAB_0125480e;
  }
LAB_01254810:
  uVar10 = (uint64_t)(iVar5 == 0);
LAB_0125485b:
  return uVar10 & 0xffffffff;
}



// ============================================================
// 012535e0
// ============================================================
// Function: FUN_012535e0
// Address: 012535e0
// Size: 1448 bytes
// Class: GNNull

uint64_t FUN_012535e0(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  char unaff_SIL;
  int64_t this_ptr;
  uint64_t uVar14;
  int iVar15;
  int64_t lVar16;
  int iStack_4c;
  
  iVar4 = *(int *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
  if ((0xe < iVar4 + 7U) && (uVar8 = *param_1, uVar8 >> 0x20 != 0)) {
    if (iVar4 < 8) {
      uVar5 = FUN_00e7bdb0();
    }
    else {
      uVar5 = **(uint64_t **)(*(int64_t *)(this_ptr + 0x48) + 0x10);
    }
    if ((uVar5 >> 0x20 == 0) || (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
      uVar5 = *param_3;
      iVar4 = FUN_01251eb0();
      iStack_4c = (int)(uVar8 >> 0x20);
      if (unaff_SIL == '\0') {
        if (iVar4 < 2) {
          uVar7 = FUN_00e7bdb0();
        }
        else {
          uVar7 = *(uint64_t *)
                   (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) +
                   (uint64_t)(iVar4 - 2) * 8);
        }
        uVar13 = iVar4 - 1;
        uVar6 = (uint64_t)uVar13;
        *param_1 = uVar7;
        iVar11 = *(int *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
        iVar9 = iVar11 + 7;
        if (-1 < iVar11) {
          iVar9 = iVar11;
        }
        if (iVar9 >> 3 < iVar4) {
          uVar7 = FUN_00e7bdb0();
        }
        else {
          uVar7 = *(uint64_t *)
                   (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) +
                   (int64_t)(int)uVar13 * 8);
        }
        *param_3 = uVar7;
        uVar14 = *(uint64_t *)
                  (*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + (int64_t)(int)uVar13 * 8
                  );
        if (uVar14 == 0) {
          uVar14 = 0;
        }
        if (((uVar7 >> 0x20 != 0) && (iStack_4c != 0)) && (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
          if (uVar13 == 0) {
            *param_1 = uVar8;
            goto LAB_01253a10;
          }
          if (iVar4 < 3) {
            uVar8 = FUN_00e7bdb0();
          }
          else {
            uVar8 = *(uint64_t *)
                     (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) +
                     (uint64_t)(iVar4 - 3) * 8);
          }
          iVar4 = iVar4 + -2;
          *param_1 = uVar8;
          iVar11 = *(int *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
          iVar9 = iVar11 + 7;
          if (-1 < iVar11) {
            iVar9 = iVar11;
          }
          if (iVar4 < iVar9 >> 3) {
            uVar8 = *(uint64_t *)
                     (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + (int64_t)iVar4 * 8);
          }
          else {
            uVar8 = FUN_00e7bdb0();
          }
          *param_3 = uVar8;
          uVar6 = *(uint64_t *)
                   (*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + (int64_t)iVar4 * 8);
          if (uVar14 != uVar6) {
            uVar14 = uVar6;
          }
        }
        uVar8 = CONCAT71((int7)(uVar6 >> 8),1);
        if (param_2 != (uint64_t *)0x0) {
          uVar5 = *param_2;
          if (uVar5 == uVar14) {
            if (((char)param_2[1] != '\0') || (uVar14 == 0)) goto LAB_0125364d;
            FUN_00d50b00();
          }
          else {
            uVar7 = param_2[1];
            if (uVar14 != 0) {
              FUN_00d50b00(uVar14);
            }
            *param_2 = uVar14;
            if (((char)uVar7 != '\0') && (uVar5 != 0)) {
              FUN_00d50b20();
            }
          }
LAB_01253b8a:
          *(void*)(param_2 + 1) = 1;
        }
      }
      else {
        uVar7 = 0;
        lVar16 = (int64_t)iVar4;
        do {
          iVar11 = *(int *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
          iVar9 = iVar11 + 7;
          if (-1 < iVar11) {
            iVar9 = iVar11;
          }
          iVar15 = (int)lVar16;
          iVar10 = iVar15;
          iVar12 = iVar15;
          if (7 < iVar11) {
            plVar1 = *(int64_t **)(*(int64_t *)(this_ptr + 0x50) + 0x10);
            if (plVar1[lVar16] == 0) {
              if (lVar16 != 0) {
                iVar10 = iVar4 + -1;
                if (iVar10 != 1) goto LAB_0125373f;
                goto LAB_01253715;
              }
              iVar15 = 1;
              iVar10 = 0;
LAB_01253752:
              if (*plVar1 == 0) {
                iVar10 = 0;
              }
              iVar12 = 1;
              iVar11 = 1;
              if (iVar9 >> 3 < 2) goto LAB_01253777;
            }
            else {
              if (iVar15 == 1) {
LAB_01253715:
                iVar10 = 1;
                goto LAB_01253752;
              }
LAB_0125373f:
              iVar12 = iVar10;
              iVar11 = iVar10;
              if (iVar9 >> 3 <= iVar10) goto LAB_01253777;
            }
            iVar12 = iVar11;
            if (plVar1[(int64_t)iVar11 + 1] == 0) {
              iVar15 = iVar11 + 1;
            }
          }
LAB_01253777:
          if (iVar10 < 1) {
            uVar6 = FUN_00e7bdb0();
          }
          else {
            uVar6 = *(uint64_t *)
                     (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) +
                     (uint64_t)(iVar10 - 1) * 8);
          }
          *param_1 = uVar6;
          iVar11 = *(int *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
          iVar9 = iVar11 + 7;
          if (-1 < iVar11) {
            iVar9 = iVar11;
          }
          if (iVar15 < iVar9 >> 3) {
            uVar6 = *(uint64_t *)
                     (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + (int64_t)iVar15 * 8);
          }
          else {
            uVar6 = FUN_00e7bdb0();
          }
          *param_3 = uVar6;
          uVar6 = *(uint64_t *)
                   (*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + (int64_t)iVar12 * 8);
          if (uVar7 == uVar6) {
            uVar6 = uVar7;
            if (*(int *)((int64_t)param_1 + 4) != 0) goto LAB_0125383e;
LAB_0125385d:
            if ((*(int *)((int64_t)param_3 + 4) == 0) ||
               ((iStack_4c != 0 && (cVar3 = FUN_00e7c020(), cVar3 != '\0')))) {
              *param_3 = uVar8;
            }
            uVar8 = CONCAT71((int7)(uVar6 >> 8),1);
            if (param_2 == (uint64_t *)0x0) goto LAB_0125364d;
            uVar5 = *param_2;
            if (uVar5 == uVar6) {
              if (((char)param_2[1] != '\0') || (uVar6 == 0)) goto LAB_0125364d;
              FUN_00d50b00();
            }
            else {
              uVar7 = param_2[1];
              if (uVar6 != 0) {
                FUN_00d50b00(uVar6);
              }
              *param_2 = uVar6;
              if (((char)uVar7 != '\0') && (uVar5 != 0)) {
                FUN_00d50b20();
              }
            }
            goto LAB_01253b8a;
          }
          uVar7 = uVar6;
          if (*(int *)((int64_t)param_1 + 4) == 0) goto LAB_0125385d;
LAB_0125383e:
          if ((iStack_4c != 0) && (cVar3 = FUN_00e7c020(), uVar6 = uVar7, cVar3 != '\0'))
          goto LAB_0125385d;
          iVar4 = iVar4 + -1;
          bVar2 = 0 < lVar16;
          lVar16 = lVar16 + -1;
        } while (bVar2);
        *param_1 = uVar8;
LAB_01253a10:
        *param_3 = uVar5;
        uVar8 = 0;
      }
      goto LAB_0125364d;
    }
  }
  uVar8 = 0;
LAB_0125364d:
  return uVar8 & 0xffffffff;
}



// ============================================================
// 00d21bf0
// ============================================================
// Function: FUN_00d21bf0
// Address: 00d21bf0
// Size: 1931 bytes
// Class: GNNull

void FUN_00d21bf0(void)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  uint8_t uVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  uint uVar8;
  void*arg1;
  int64_t this_ptr;
  int iVar9;
  int64_t lVar10;
  int64_t lVar11;
  bool bVar12;
  int64_t local_70;
  char local_68;
  int64_t local_48;
  char local_40;
  
  FUN_00d50cd0();
  cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x380))();
  lVar11 = g_0277cf70;
  lVar10 = g_0277cf50;
  plVar1 = (int64_t *)*arg1;
  if (cVar3 == '\0') {
    if (g_0277cf70 != 0) {
      FUN_00d50b00();
    }
    iVar5 = (**(code **)(*plVar1 + 0x598))();
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    lVar10 = g_0277cf78;
    if (iVar5 == 0) {
      plVar1 = (int64_t *)*arg1;
      if (g_0277cf78 != 0) {
        FUN_00d50b00();
      }
      iVar5 = (**(code **)(*plVar1 + 0x598))();
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    if (1 < iVar5) {
      uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
      *(void*)(this_ptr + 0x1c) = uVar4;
      if (iVar5 != 2) {
        uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
        *(void*)(this_ptr + 0x1d) = uVar4;
        if (3 < iVar5) {
          uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
          *(void*)(this_ptr + 0x1e) = uVar4;
        }
      }
    }
    iVar5 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
    iVar6 = FUN_00e83090();
    iVar9 = iVar6 + 7;
    if (-1 < iVar6) {
      iVar9 = iVar6;
    }
    *(int *)(this_ptr + 0x18) = iVar9 >> 3;
    uVar7 = FUN_00e83060();
    *(void*)(this_ptr + 0x10) = uVar7;
    if (0 < iVar5) {
      do {
        (**(code **)(*(int64_t *)*arg1 + 0x470))();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        iVar9 = *(int *)(this_ptr + 0xc);
        *(int *)(this_ptr + 0xc) = iVar9 + 1;
        FUN_00d23090();
        cVar3 = *(char *)(this_ptr + 0x1c);
        *(int64_t *)(*(int64_t *)(this_ptr + 0x10) + (int64_t)iVar9 * 8) = local_48;
        if ((cVar3 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    if (g_0277cf50 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x590))();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    lVar10 = g_0277cf50;
    if (cVar3 != '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_0277cf50 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x510))();
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        if (*(char *)(this_ptr + 0x1c) == '\0') {
          uVar8 = *(uint *)(this_ptr + 0xc);
          if (0 < (int)uVar8) {
            lVar10 = (uint64_t)uVar8 + 1;
            do {
              uVar8 = uVar8 - 1;
              if (*(int64_t *)(*(int64_t *)(this_ptr + 0x10) + (uint64_t)uVar8 * 8) != 0) {
                FUN_00d50b20();
              }
              lVar10 = lVar10 + -1;
            } while (1 < lVar10);
          }
        }
        *(void*)(this_ptr + 0x1c) = 1;
      }
    }
    lVar10 = g_0277cf58;
    plVar1 = (int64_t *)*arg1;
    if (g_0277cf58 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x590))();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    lVar10 = g_0277cf58;
    if (cVar3 != '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_0277cf58 != 0) {
        FUN_00d50b00();
      }
      uVar4 = (**(code **)(*plVar1 + 0x510))();
      *(void*)(this_ptr + 0x1d) = uVar4;
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    lVar10 = g_0277cf60;
    plVar1 = (int64_t *)*arg1;
    if (g_0277cf60 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x590))();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    lVar10 = g_0277cf60;
    if (cVar3 != '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_0277cf60 != 0) {
        FUN_00d50b00();
      }
      uVar4 = (**(code **)(*plVar1 + 0x510))();
      *(void*)(this_ptr + 0x1e) = uVar4;
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x390))();
    lVar10 = g_0277cf68;
    if (cVar3 == '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_0277cf68 != 0) {
        FUN_00d50b00();
      }
      iVar5 = (**(code **)(*plVar1 + 0x520))();
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      iVar6 = FUN_00e83090();
      iVar9 = iVar6 + 7;
      if (-1 < iVar6) {
        iVar9 = iVar6;
      }
      *(int *)(this_ptr + 0x18) = iVar9 >> 3;
      uVar7 = FUN_00e83060();
      *(void*)(this_ptr + 0x10) = uVar7;
      if (0 < iVar5) {
        iVar9 = 0;
        lVar10 = 0;
        bVar2 = false;
        do {
          plVar1 = (int64_t *)*arg1;
          FUN_00d93550();
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          (**(code **)(*plVar1 + 0x578))();
          if (local_48 == lVar10) {
            if ((!bVar2) && (local_48 != 0)) {
              lVar11 = lVar10;
              if (local_40 != '\0') goto LAB_00d221c4;
              FUN_00d50b00();
              goto LAB_00d22230;
            }
            if (local_40 == '\0') goto LAB_00d22258;
LAB_00d2223a:
            if (local_48 != 0) {
              FUN_00d50b20();
            }
          }
          else if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
            lVar11 = local_48;
            if (bVar2) {
              bVar12 = lVar10 == 0;
              lVar10 = local_48;
              bVar2 = true;
              if (bVar12) goto LAB_00d22258;
              FUN_00d50b20();
            }
LAB_00d22230:
            lVar10 = lVar11;
            bVar2 = true;
            if (local_40 != '\0') goto LAB_00d2223a;
          }
          else {
            lVar11 = local_48;
            if ((bVar2) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
LAB_00d221c4:
            local_40 = '\0';
            lVar10 = lVar11;
            bVar2 = true;
          }
LAB_00d22258:
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if ((lVar10 != 0) || (*(char *)(this_ptr + 0x1d) != '\0')) {
            iVar6 = *(int *)(this_ptr + 0xc);
            *(int *)(this_ptr + 0xc) = iVar6 + 1;
            FUN_00d23090();
            if ((*(char *)(this_ptr + 0x1c) == '\0') && (lVar10 != 0)) {
              FUN_00d50b00();
            }
            *(int64_t *)(*(int64_t *)(this_ptr + 0x10) + (int64_t)iVar6 * 8) = lVar10;
          }
          iVar9 = iVar9 + 1;
        } while (iVar5 != iVar9);
        if ((bVar2) && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (this_ptr != 0) {
        FUN_00d50b00();
      }
      FUN_00e5a7d0();
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 01694420
// ============================================================
// Function: FUN_01694420
// Address: 01694420
// Size: 1001 bytes
// Class: GNNull
// String references:
//   "(knownRoles & ARA::kARAPlaybackRendererRole) != 0"
//   "(knownRoles & ARA::kARAEditorRendererRole) != 0"
//   "(knownRoles & ARA::kARAEditorViewRole) != 0"
//   "assignedRoles != 0"
//   "(knownRoles | assignedRoles) == knownRoles"
//   "(_documentController == GNNull) && \"binding must be done only once\""
//   "!GNHasFlag(_araBindingLockFlags, MUAraPlugInReceivedStartProcessing) && \"binding must be done befo...
//   "!GNHasFlag(_araBindingLockFlags, MUAraPlugInReceivedSetParameterState) && \"binding must be done be...
//   "!GNHasFlag(_araBindingLockFlags, MUAraPlugInReceivedCreateController) && \"binding must be done bef...
//   "!hostHoldsOnToUnusedStoppedPlugIns()"
//   "!_isEditorRenderer || !isNotProcessingContinuouslyWhileActive"
//   "provided object ref is invalid"
//   "call required from document main thread"

void* FUN_01694420(uint64_t param_1,uint param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  void*puVar5;
  uint uVar6;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  
  FUN_00da7190();
  if ((param_2 & 1) == 0) {
    puVar5 = (void*)0x0;
    FUN_016aea20();
    goto LAB_01694559;
  }
  if ((param_2 & 2) == 0) {
    puVar5 = (void*)0x0;
    FUN_016aea20();
    goto LAB_01694559;
  }
  if ((param_2 & 4) == 0) {
    puVar5 = (void*)0x0;
    FUN_016aea20();
    goto LAB_01694559;
  }
  if ((uint)param_1 == 0) {
    puVar5 = (void*)0x0;
    FUN_016aea20();
    goto LAB_01694559;
  }
  if ((~param_2 & (uint)param_1) != 0) {
    puVar5 = (void*)0x0;
    FUN_016aea20();
    goto LAB_01694559;
  }
  if ((arg1 == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    FUN_016aea20();
    puVar5 = (void*)0x0;
    goto LAB_01694559;
  }
  FUN_00d50b00();
  cVar2 = FUN_0168a0d0();
  if (cVar2 == '\0') {
    puVar5 = (void*)0x0;
    FUN_016aea20();
  }
  else if (*(int64_t *)(this_ptr + 0x98) == 0) {
    if ((*(byte *)(this_ptr + 0xa0) & 1) == 0) {
      cVar2 = FUN_016ae5f0();
      uVar6 = *(uint *)(this_ptr + 0xa0);
      if (cVar2 == '\0') {
        if ((uVar6 & 2) != 0) {
          puVar5 = (void*)0x0;
          FUN_016aea20(uVar6,
                       "!GNHasFlag(_araBindingLockFlags, MUAraPlugInReceivedSetParameterState) && \"binding must be done before restoring state\""
                      );
          goto LAB_01694551;
        }
      }
      else if ((uVar6 & 2) != 0) {
        FUN_016aea20(uVar6,
                     "!GNHasFlag(_araBindingLockFlags, MUAraPlugInReceivedSetParameterState) && \"binding must be done before restoring state\""
                    );
        uVar6 = *(uint *)(this_ptr + 0xa0);
      }
      if ((uVar6 & 4) == 0) {
        *(byte *)(this_ptr + 0xa5) = (byte)param_1 & 1;
        *(byte *)(this_ptr + 0xa6) = (byte)((param_1 & 0xffffffff) >> 1) & 1;
        *(byte *)(this_ptr + 0xa7) = (byte)((param_1 & 0xffffffff) >> 2) & 1;
        cVar2 = FUN_016ae5f0();
        if (cVar2 == '\0') {
          cVar2 = FUN_00bd22a0();
          if (cVar2 != '\0') {
            FUN_016aea20();
          }
          iVar3 = (**(code **)(**(int64_t **)(this_ptr + 0x68) + 0xb0))();
          if ((*(char *)(this_ptr + 0xa6) != '\0') && (iVar3 == 1)) {
            FUN_016aea20();
          }
        }
        lVar1 = *(int64_t *)(this_ptr + 0x98);
        if (lVar1 != arg1) {
          FUN_00d50b00();
          *(int64_t *)(this_ptr + 0x98) = arg1;
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b00();
        FUN_01689630();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
        *(void*)(this_ptr + 0xa4) = 1;
        cVar2 = FUN_016ae5f0();
        if (cVar2 == '\0') {
          FUN_0167ab60();
          pvVar4 = _pthread_getspecific(uVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01537ab0();
          iVar3 = *(int *)(local_60 + 0xc);
          if (local_58 != '\0') {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (iVar3 != 0) {
            FUN_016948c0();
          }
        }
        puVar5 = (void*)FUN_00e83020();
        *puVar5 = 0x48;
        cVar2 = FUN_016ae5f0();
        if (cVar2 != '\0') {
          puVar5[1] = this_ptr;
          puVar5[2] = &g_025f8d98;
        }
        if (*(char *)(this_ptr + 0xa5) != '\0') {
          puVar5[3] = this_ptr;
          puVar5[4] = &g_025f8db0;
        }
        if (*(char *)(this_ptr + 0xa6) != '\0') {
          puVar5[5] = this_ptr;
          puVar5[6] = &g_025f8dc8;
        }
        if (*(char *)(this_ptr + 0xa7) != '\0') {
          puVar5[7] = this_ptr;
          puVar5[8] = &g_025f8df0;
        }
        *(void**)(this_ptr + 0x90) = puVar5;
      }
      else {
        puVar5 = (void*)0x0;
        FUN_016aea20(uVar6,
                     "!GNHasFlag(_araBindingLockFlags, MUAraPlugInReceivedCreateController) && \"binding must be done before creating the UI\""
                    );
      }
    }
    else {
      puVar5 = (void*)0x0;
      FUN_016aea20();
    }
  }
  else {
    puVar5 = (void*)0x0;
    FUN_016aea20();
  }
LAB_01694551:
  FUN_00d50b20();
LAB_01694559:
  FUN_00da71b0();
  return puVar5;
}



// ============================================================
// 00d227f0
// ============================================================
// Function: FUN_00d227f0
// Address: 00d227f0
// Size: 1321 bytes
// Class: GNNull

void FUN_00d227f0(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  void*arg1;
  int64_t this_ptr;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00d50de0();
  cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x378))();
  lVar2 = g_0277cf70;
  lVar4 = g_0277cf50;
  if (cVar3 == '\0') {
    plVar1 = (int64_t *)*arg1;
    if (*(char *)(this_ptr + 0x1e) == '\0') {
      if (g_0277cf70 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar2;
      local_78 = '\x01';
      (**(code **)(*plVar1 + 0x5a0))(param_1,4);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (g_0277cf70 != 0) {
        FUN_00d50b00();
      }
      local_90 = lVar2;
      local_88 = '\x01';
      (**(code **)(*plVar1 + 0x5a0))(param_1,3);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    if (*(char *)(this_ptr + 0x1e) == '\0') {
      (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3b8))();
    if (0 < *(int *)(this_ptr + 0xc)) {
      lVar4 = 0;
      do {
        local_70 = *(int64_t *)(*(int64_t *)(this_ptr + 0x10) + lVar4 * 8);
        local_68 = '\0';
        (**(code **)(*(int64_t *)*arg1 + 0x400))();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(this_ptr + 0xc));
    }
  }
  else {
    if (*(char *)(this_ptr + 0x1c) != '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_0277cf50 != 0) {
        FUN_00d50b00();
      }
      local_100 = lVar4;
      local_f8 = '\x01';
      (**(code **)(*plVar1 + 0x488))(param_1,&local_100);
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar4 = g_0277cf58;
    if (*(char *)(this_ptr + 0x1d) != '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_0277cf58 != 0) {
        FUN_00d50b00();
      }
      local_f0 = lVar4;
      local_e8 = '\x01';
      (**(code **)(*plVar1 + 0x488))(param_1,&local_f0);
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar4 = g_0277cf60;
    plVar1 = (int64_t *)*arg1;
    if (g_0277cf60 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar4;
    local_d8 = '\x01';
    (**(code **)(*plVar1 + 0x488))(param_1,&local_e0);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x388))();
    local_c0 = g_0277cf68;
    if (cVar3 == '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_0277cf68 != 0) {
        FUN_00d50b00();
      }
      local_b8 = '\x01';
      (**(code **)(*plVar1 + 0x498))(param_1,&local_c0);
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (0 < *(int *)(this_ptr + 0xc)) {
        lVar4 = 0;
        do {
          lVar2 = *(int64_t *)(*(int64_t *)(this_ptr + 0x10) + lVar4 * 8);
          plVar1 = (int64_t *)*arg1;
          if (*(char *)(this_ptr + 0x1e) == '\0') {
            local_98 = '\0';
            local_a0 = lVar2;
            FUN_00d93550();
            local_50 = local_40;
            local_48 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_48 = '\x01';
            (**(code **)(*plVar1 + 0x4f8))(param_1,&local_50);
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_a8 = '\0';
            local_b0 = lVar2;
            FUN_00d93550();
            local_60 = local_40;
            local_58 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_58 = '\x01';
            (**(code **)(*plVar1 + 0x4f0))(param_1,&local_60);
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(this_ptr + 0xc));
      }
    }
    else {
      FUN_00d50b00();
      FUN_00e4ad10();
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 01251eb0
// ============================================================
// Function: FUN_01251eb0
// Address: 01251eb0
// Size: 827 bytes
// Class: GNNull

uint FUN_01251eb0(uint64_t param_1,uint *param_2)

{
  uint64_t uVar1;
  char cVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  uint64_t arg1;
  int64_t this_ptr;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iStack_44;
  
  uVar9 = *(uint *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
  uVar5 = uVar9;
  if ((int)uVar9 < 0) {
    uVar5 = uVar9 + 7;
  }
  if (uVar9 + 7 < 0xf) {
LAB_01251f0c:
    uVar5 = 0;
LAB_012521d4:
    if (param_2 != (uint *)0x0) {
      *param_2 = uVar5;
    }
    return uVar5;
  }
  iVar6 = (int)((uint64_t)arg1 >> 0x20);
  puVar4 = *(uint64_t **)(*(int64_t *)(this_ptr + 0x48) + 0x10);
  if ((iVar6 != 0) && (*puVar4 >> 0x20 != 0)) {
    cVar2 = FUN_00e7c020();
    if (cVar2 != '\0') goto LAB_01251f0c;
    puVar4 = *(uint64_t **)(*(int64_t *)(this_ptr + 0x48) + 0x10);
    uVar9 = *(uint *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
  }
  uVar5 = (int)uVar5 >> 3;
  if (((*(uint64_t *)((int64_t)(int)uVar9 + -8 + (int64_t)puVar4) >> 0x20 != 0) && (iVar6 != 0))
     && (cVar2 = FUN_00e7c020(), cVar2 == '\0')) goto LAB_012521d4;
  if ((param_2 != (uint *)0x0) && (uVar9 = *param_2, uVar9 != 0xffffffff)) {
    if ((int)uVar5 <= (int)uVar9) {
      uVar9 = uVar5 - 1;
    }
    if (((iVar6 == 0) ||
        (*(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + 4 +
                 (int64_t)(int)uVar9 * 8) == 0)) || (cVar2 = FUN_00e7c020(), cVar2 == '\0')) {
      uVar7 = uVar9;
      if ((((((((int)(uVar5 - 1) <= (int)uVar9) || (iVar6 == 0)) ||
             (uVar8 = uVar9 + 1,
             *(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + 4 +
                     (int64_t)(int)uVar8 * 8) == 0)) || (cVar2 = FUN_00e7c020(), cVar2 == '\0')) &&
           (((uVar8 = uVar9 + 2, (int)uVar5 <= (int)uVar8 || (iVar6 == 0)) ||
            ((*(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + 4 +
                      (int64_t)(int)uVar8 * 8) == 0 || (cVar2 = FUN_00e7c020(), cVar2 == '\0'))))))
          && ((uVar9 = uVar9 + 3, uVar8 = uVar5, (int)uVar9 < (int)uVar5 && (iVar6 != 0)))) &&
         ((*(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + 4 +
                   (int64_t)(int)uVar9 * 8) != 0 && (cVar2 = FUN_00e7c020(), cVar2 != '\0')))) {
        uVar8 = uVar9;
      }
      goto LAB_01252136;
    }
    uVar5 = uVar9;
    if (0 < (int)uVar9) {
      uVar8 = uVar9;
      if (((iVar6 != 0) &&
          (*(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + 4 +
                   (uint64_t)(uVar9 - 1) * 8) != 0)) &&
         (cVar2 = FUN_00e7c020(), uVar7 = uVar9 - 1, cVar2 == '\0')) goto LAB_01252136;
      uVar5 = 1;
      if (1 < (int)uVar9) {
        if (((iVar6 != 0) &&
            (*(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + 4 +
                     (uint64_t)(uVar9 - 2) * 8) != 0)) &&
           (cVar2 = FUN_00e7c020(), uVar7 = uVar9 - 2, cVar2 == '\0')) goto LAB_01252136;
        uVar5 = 2;
        if (((2 < (int)uVar9) && (uVar5 = uVar9, iVar6 != 0)) &&
           (*(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + 4 +
                    (uint64_t)(uVar9 - 3) * 8) != 0)) {
          cVar2 = FUN_00e7c020();
          uVar7 = uVar9 - 3;
          if (cVar2 != '\0') {
            uVar7 = 0;
          }
          goto LAB_01252136;
        }
      }
    }
  }
  uVar8 = uVar5;
  uVar7 = 0;
LAB_01252136:
  iVar3 = uVar8 - uVar7;
joined_r0x0125213e:
  uVar5 = uVar8;
  uVar8 = uVar5;
  if (iVar3 != 1) {
    do {
      uVar5 = iVar3 / 2 + uVar7;
      uVar1 = *(uint64_t *)
               (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + (int64_t)(int)uVar5 * 8);
      if ((uVar1 >> 0x20 != 0) && (iVar6 != 0)) {
        cVar2 = FUN_00e7c000();
        if (cVar2 != '\0') {
          uVar5 = uVar5 + 1;
          break;
        }
        iStack_44 = (int)(uVar1 >> 0x20);
        if (((iStack_44 != 0) && (iVar6 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 != '\0'))
        goto code_r0x012521ba;
      }
      iVar3 = uVar5 - uVar7;
      uVar8 = uVar5;
      if (iVar3 == 1) break;
    } while( true );
  }
  goto LAB_012521d4;
code_r0x012521ba:
  iVar3 = uVar8 - uVar5;
  uVar7 = uVar5;
  goto joined_r0x0125213e;
}



// ============================================================
// 012523c0
// ============================================================
// Function: FUN_012523c0
// Address: 012523c0
// Size: 681 bytes
// Class: GNNull

void* FUN_012523c0(double param_1,char param_2,void*param_3,int *param_4)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  void*in_RCX;
  int iVar5;
  int64_t arg1;
  int iVar6;
  void*this_ptr;
  int iVar7;
  int iVar8;
  int iVar9;
  uint64_t uVar10;
  
  if ((((*(int *)(*(int64_t *)(arg1 + 0x48) + 0x18) < 8) || (NAN(param_1))) ||
      (**(uint64_t **)(*(int64_t *)(arg1 + 0x48) + 0x10) >> 0x20 == 0)) ||
     (cVar2 = FUN_00e7c720(), cVar2 != '\0')) {
    iVar3 = 0;
  }
  else {
    FUN_00e7bcc0();
    uVar10 = FUN_00e7cd00(param_1);
    iVar3 = FUN_01251eb0(uVar10,param_4);
    if (iVar3 < 1) goto LAB_012524a0;
    while (uVar4 = *(uint64_t *)
                    (*(int64_t *)(*(int64_t *)(arg1 + 0x48) + 0x10) +
                    (uint64_t)(iVar3 - 1) * 8), !NAN(param_1)) {
      while( true ) {
        if ((uVar4 >> 0x20 == 0) || (cVar2 = FUN_00e7c720(), cVar2 == '\0'))
        goto joined_r0x012524dc;
        iVar3 = iVar3 + -1;
        if (0 < iVar3) break;
LAB_012524a0:
        uVar4 = FUN_00e7bdb0();
        if (NAN(param_1)) goto joined_r0x012524dc;
      }
    }
  }
joined_r0x012524dc:
  if (((param_4 != (int *)0x0) && (*param_4 = iVar3, param_2 != '\0')) &&
     (*(int64_t *)(*(int64_t *)(*(int64_t *)(arg1 + 0x50) + 0x10) + (int64_t)iVar3 * 8) ==
      0)) {
    *param_4 = iVar3 + (uint)(iVar3 < 1) * 2 + -1;
  }
  iVar7 = *(int *)(*(int64_t *)(arg1 + 0x48) + 0x18);
  iVar6 = iVar7 + 7;
  if (-1 < iVar7) {
    iVar6 = iVar7;
  }
  iVar9 = iVar3;
  iVar5 = iVar3;
  if ((param_2 == '\0') || (iVar7 < 8)) goto joined_r0x0125257d;
  plVar1 = *(int64_t **)(*(int64_t *)(arg1 + 0x50) + 0x10);
  if (plVar1[iVar3] == 0) {
    if (iVar3 == 0) {
      iVar3 = 1;
      iVar7 = 0;
    }
    else {
      iVar8 = iVar3 + -1;
      iVar7 = 1;
      if (iVar8 != 1) goto LAB_0125255d;
    }
LAB_012525a2:
    iVar5 = 0;
    if (*plVar1 != 0) {
      iVar5 = iVar7;
    }
    iVar8 = 1;
    iVar9 = 1;
    if (iVar6 >> 3 < 2) goto joined_r0x0125257d;
  }
  else {
    iVar7 = 1;
    iVar8 = iVar3;
    if (iVar3 == 1) goto LAB_012525a2;
LAB_0125255d:
    iVar5 = iVar8;
    iVar9 = iVar8;
    if (iVar6 >> 3 <= iVar8) goto joined_r0x0125257d;
  }
  iVar9 = iVar8;
  if (plVar1[(int64_t)iVar8 + 1] == 0) {
    iVar3 = iVar8 + 1;
  }
joined_r0x0125257d:
  if (in_RCX != (void*)0x0) {
    if (iVar5 < 1) {
      uVar10 = FUN_00e7bdb0();
      *in_RCX = uVar10;
    }
    else {
      *in_RCX = *(void*)
                 (*(int64_t *)(*(int64_t *)(arg1 + 0x48) + 0x10) + (uint64_t)(iVar5 - 1) * 8
                 );
    }
  }
  if (param_3 != (void*)0x0) {
    iVar7 = *(int *)(*(int64_t *)(arg1 + 0x48) + 0x18);
    iVar6 = iVar7 + 7;
    if (-1 < iVar7) {
      iVar6 = iVar7;
    }
    if (iVar3 < iVar6 >> 3) {
      uVar10 = *(void*)
                (*(int64_t *)(*(int64_t *)(arg1 + 0x48) + 0x10) + (int64_t)iVar3 * 8);
    }
    else {
      uVar10 = FUN_00e7bdb0();
    }
    *param_3 = uVar10;
  }
  *this_ptr = *(void*)
                (*(int64_t *)(*(int64_t *)(arg1 + 0x50) + 0x10) + (int64_t)iVar9 * 8);
  *(void*)(this_ptr + 1) = 0;
  return this_ptr;
}



// ============================================================
// 00d21790
// ============================================================
// Function: FUN_00d21790
// Address: 00d21790
// Size: 645 bytes
// Class: GNNull
// String references:
//   "GNNull"
//   "NotAnObject"
//   ",\n  "
//   ", "

void FUN_00d21790(void)

{
  uint uVar1;
  int64_t *plVar2;
  char cVar3;
  void*puVar4;
  int64_t arg1;
  void*this_ptr;
  uint64_t uVar5;
  int64_t local_50;
  char local_48;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025795a8;
  (*g_025795c0)();
  FUN_00d8db40();
  uVar1 = *(uint *)(arg1 + 0xc);
  if (0 < (int)uVar1) {
    if ((int)uVar1 < 5) {
      uVar5 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(arg1 + 0x10) + uVar5 * 8);
        cVar3 = FUN_00d50c10();
        if (cVar3 == '\0') {
          FUN_00d8db40();
        }
        else if (plVar2 == (int64_t *)0x0) {
          FUN_00d8db40();
        }
        else {
          (**(code **)(*plVar2 + 400))();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_00d8dbf0();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        if (uVar5 < uVar1 - 1) {
          FUN_00d8db40();
        }
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
    else {
      uVar5 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(arg1 + 0x10) + uVar5 * 8);
        cVar3 = FUN_00d50c10();
        if (cVar3 == '\0') {
          FUN_00d8db40();
        }
        else if (plVar2 == (int64_t *)0x0) {
          FUN_00d8db40();
        }
        else {
          (**(code **)(*plVar2 + 400))();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_00d8dbf0();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        if (uVar5 < uVar1 - 1) {
          FUN_00d8db40();
        }
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
  }
  FUN_00d8db40();
  FUN_00d8c7d0();
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01251710
// ============================================================
// Function: FUN_01251710
// Address: 01251710
// Size: 558 bytes
// Class: GNNull
// String references:
//   "%@"
//   "sequence: "
//   "(GNNull)"
//   " (%Q) "
//   "const sequence: %@"

void* FUN_01251710(void)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  void*puVar4;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar5;
  void*local_50;
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t local_40;
  uint32_t uStack_3c;
  char local_38;
  
  puVar4 = g_027be958;
  if (*(int *)(*(int64_t *)(arg1 + 0x48) + 0x18) + 7U < 0xf) {
    lVar1 = **(int64_t **)(*(int64_t *)(arg1 + 0x50) + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
      FUN_00d8cb40();
      if (lVar1 == 0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
    *(void*)(this_ptr + 1) = 0;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_025795a8;
    (*g_025795c0)();
    FUN_00d94d80();
    lVar1 = *(int64_t *)(arg1 + 0x50);
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar5 = 0;
        do {
          lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
          if (lVar2 == 0) {
            FUN_00d8db40();
          }
          else {
            local_48 = 1;
            local_50 = &g_024c5048;
            local_38 = 0;
            FUN_00d50b00();
            local_40 = (uint32_t)lVar2;
            uStack_3c = (uint32_t)((uint64_t)lVar2 >> 0x20);
            local_38 = '\x01';
            FUN_00d94d80();
            local_50 = &g_024c5048;
            if ((local_38 != '\0') && (CONCAT44(uStack_3c,local_40) != 0)) {
              FUN_00d50b20();
            }
          }
          if ((int)lVar5 != *(int *)(lVar1 + 0xc) + -1) {
            local_48 = 1;
            local_50 = (void*)&g_025d0e78;
            uVar3 = *(void*)
                     (*(int64_t *)(*(int64_t *)(arg1 + 0x48) + 0x10) + lVar5 * 8);
            uStack_44 = (uint32_t)uVar3;
            local_40 = (uint32_t)((uint64_t)uVar3 >> 0x20);
            FUN_00d94d80(&g_025d0e78,&local_50);
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
      }
      FUN_00083b20();
    }
  }
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

