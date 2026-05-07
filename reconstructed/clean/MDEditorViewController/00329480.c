// Function: FUN_00329480
// Address: 00329480
// Size: 2860 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00329480(char param_1,void*param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t lVar6;
  char *pcVar7;
  void* pVar8;
  int64_t ******pppppplVar9;
  int64_t *******ppppppplVar10;
  int64_t *******ppppppplVar11;
  int64_t *******ppppppplVar12;
  int64_t *arg1;
  int64_t *******this_ptr;
  float fVar13;
  uint32_t uVar14;
  uint64_t uVar15;
  uint32_t uVar17;
  double local_c0;
  uint64_t local_98;
  int64_t *******local_80;
  char local_78;
  uint64_t local_70;
  int64_t *******local_60;
  int64_t ******local_58;
  int64_t *******local_50;
  uint64_t local_48;
  int local_40;
  char local_38 [8];
  uint64_t uVar16;
  
  FUN_00d23310();
  ppppppplVar10 = &local_58;
  local_80 = (int64_t *******)CONCAT71(local_80._1_7_,(char)local_58);
  ppppppplVar11 = ppppppplVar10;
  if ((char)local_58 == '\0') {
    ppppppplVar11 = (int64_t *******)&local_80;
  }
  *(void*)ppppppplVar11 = 0;
  if (((char)local_58 != '\0') && (local_60 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((void*)ppppppplVar10);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar4 = (int64_t *)FUN_00e8b990();
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if (((char)local_80 != '\0') && (local_60 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (int64_t *)0x0) {
    return;
  }
  FUN_01d3abf0();
  uVar15 = FUN_01e466c0();
  local_70 = (int64_t ******)((uint64_t)local_70._4_4_ << 0x20);
  do {
    local_98._4_4_ = (float)((uint64_t)uVar15 >> 0x20);
    local_98._0_4_ = (float)uVar15;
    FUN_01d3abf0();
    uVar16 = FUN_01e466c0();
    fVar13 = (float)uVar16;
    iVar2 = FUN_01d3a5a0();
    if (iVar2 == 6) break;
    if ((((float)local_98 != fVar13) || (NAN((float)local_98) || NAN(fVar13))) ||
       ((float)((uint64_t)uVar16 >> 0x20) != local_98._4_4_)) {
      local_c0 = (double)FUN_01a34bd0(fVar13);
      uVar5 = FUN_01d3b590();
      if (((uVar5 & 8) == 0) && (cVar1 = (*(*this_ptr[0x2d])[0x79])(), cVar1 != '\0')) {
        (*(*this_ptr)[0x130])();
        local_c0 = (double)(*(*local_60)[0x6e])(SUB84(local_c0,0));
        if (((char)local_58 != '\0') && (local_60 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*plVar4 + 0x3b8))();
      if ((int64_t *******)*param_2 != (int64_t *******)0x0) {
        local_58._0_1_ = '\0';
        local_60 = (int64_t *******)0x0;
        local_48 = 0xffffffff;
        local_40 = 0;
        local_50 = (int64_t *******)*param_2;
        while( true ) {
          lVar6 = (int64_t)(int)local_48;
          iVar2 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar2);
          if (*(int *)((int64_t)local_50 + 0xc) <= iVar2) break;
          pppppplVar9 = local_50[2];
          local_60 = (int64_t *******)pppppplVar9[lVar6 + 1];
          if (param_1 == '\0') {
            pvVar3 = _pthread_getspecific((void*)pppppplVar9);
            pVar8 = (void*)pppppplVar9;
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_00362960();
            if (cVar1 == '\0') {
              pvVar3 = _pthread_getspecific(pVar8);
              ppppppplVar10 = local_60;
              if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                ppppppplVar10 =
                     (int64_t *******)local_60[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              local_70 = ppppppplVar10[7];
              pppppplVar9 = ppppppplVar10[9];
              if (((double)ppppppplVar10[8] <= (double)local_70) ||
                 (((double)pppppplVar9 < (double)ppppppplVar10[10] &&
                  ((double)pppppplVar9 < (double)local_70)))) {
                local_70 = pppppplVar9;
              }
            }
            else {
              pvVar3 = _pthread_getspecific(pVar8);
              ppppppplVar10 = local_60;
              if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                ppppppplVar10 =
                     (int64_t *******)local_60[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              local_70 = ppppppplVar10[8];
            }
            pvVar3 = _pthread_getspecific(pVar8);
            ppppppplVar10 = local_60;
            if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              ppppppplVar10 =
                   (int64_t *******)local_60[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            local_98._0_4_ = SUB84(ppppppplVar10[9],0);
            pvVar3 = _pthread_getspecific(pVar8);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_00362980();
            if (cVar1 == '\0') {
              pvVar3 = _pthread_getspecific(pVar8);
              ppppppplVar10 = local_60;
              if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                ppppppplVar10 =
                     (int64_t *******)local_60[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              local_98._0_4_ = SUB84(ppppppplVar10[7],0);
            }
            uVar14 = (int)local_70;
            uVar17 = (int)((uint64_t)local_70 >> 0x20);
            if ((double)local_70 <= local_c0) {
              uVar14 = SUB84(local_c0,0);
              uVar17 = (int)((uint64_t)local_c0 >> 0x20);
            }
LAB_00329a4c:
            local_70 = (int64_t ******)CONCAT44(uVar17,uVar14);
          }
          else {
            pvVar3 = _pthread_getspecific((void*)pppppplVar9);
            pVar8 = (void*)pppppplVar9;
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_00362960();
            if (cVar1 == '\0') {
              pvVar3 = _pthread_getspecific(pVar8);
              ppppppplVar10 = local_60;
              if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                ppppppplVar10 =
                     (int64_t *******)local_60[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              local_98 = ppppppplVar10[8];
              if ((double)local_98 <= (double)ppppppplVar10[7]) {
                uVar14 = SUB84(ppppppplVar10[10],0);
                uVar17 = (uint32_t)((uint64_t)ppppppplVar10[10] >> 0x20);
                goto LAB_00329981;
              }
              pppppplVar9 = ppppppplVar10[10];
              uVar14 = SUB84(pppppplVar9,0);
              uVar17 = (uint32_t)((uint64_t)pppppplVar9 >> 0x20);
              if (((double)ppppppplVar10[9] <= (double)pppppplVar9 &&
                   (double)pppppplVar9 != (double)ppppppplVar10[9]) &&
                 ((double)local_98 < (double)pppppplVar9)) goto LAB_00329981;
            }
            else {
              pvVar3 = _pthread_getspecific(pVar8);
              ppppppplVar10 = local_60;
              if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                ppppppplVar10 =
                     (int64_t *******)local_60[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              uVar14 = SUB84(ppppppplVar10[7],0);
              uVar17 = (uint32_t)((uint64_t)ppppppplVar10[7] >> 0x20);
LAB_00329981:
              local_98 = (int64_t ******)CONCAT44(uVar17,uVar14);
            }
            pvVar3 = _pthread_getspecific(pVar8);
            ppppppplVar10 = local_60;
            if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              ppppppplVar10 =
                   (int64_t *******)local_60[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            local_70 = ppppppplVar10[10];
            pvVar3 = _pthread_getspecific(pVar8);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_00362980();
            local_98._0_4_ = (float)(int)local_98;
            if (local_c0 <= (double)local_98) {
              local_98._0_4_ = (float)SUB84(local_c0,0);
            }
            if (cVar1 == '\0') {
              pvVar3 = _pthread_getspecific(pVar8);
              ppppppplVar10 = local_60;
              if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                ppppppplVar10 =
                     (int64_t *******)local_60[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              uVar14 = (int)ppppppplVar10[8];
              uVar17 = (int)((uint64_t)ppppppplVar10[8] >> 0x20);
              goto LAB_00329a4c;
            }
          }
          pvVar3 = _pthread_getspecific(pVar8);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_003621a0((float)local_98);
          pvVar3 = _pthread_getspecific(pVar8);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00362200((int)local_70);
          if (local_48._4_4_ != 0) {
            if (local_48 < 0) {
              iVar2 = -local_48._4_4_;
            }
            else {
              local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
              FUN_00d23690();
              local_40 = local_40 + local_48._4_4_;
              iVar2 = 0;
            }
            local_48 = CONCAT44(iVar2,(int)local_48);
          }
        }
        ppppppplVar10 = local_50;
        FUN_0032bfd0();
      }
      ppppppplVar10 = (int64_t *******)CONCAT71((int7)((uint64_t)ppppppplVar10 >> 8),1);
      local_70 = (int64_t ******)CONCAT44(local_70._4_4_,(int)ppppppplVar10);
      (*(*this_ptr)[0xc4])();
      uVar15 = uVar16;
    }
    (*(*this_ptr)[0xcb])();
    ppppppplVar11 = (int64_t *******)*arg1;
    if (ppppppplVar11 == local_60) {
      if (((char)arg1[1] != '\0') || (local_60 == (int64_t *******)0x0)) goto LAB_00329c16;
      ppppppplVar12 = ppppppplVar11;
      if ((char)local_58 == '\0') {
        FUN_00d50b00();
        goto LAB_00329c09;
      }
LAB_00329590:
      *(void*)(arg1 + 1) = 1;
    }
    else {
      lVar6 = arg1[1];
      if ((char)local_58 != '\0') {
        *arg1 = (int64_t)local_60;
        ppppppplVar12 = local_60;
        if (((char)lVar6 != '\0') && (ppppppplVar11 != (int64_t *******)0x0)) {
          FUN_00d50b20();
          ppppppplVar12 = (int64_t *******)*arg1;
        }
        goto LAB_00329590;
      }
      if (local_60 != (int64_t *******)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)local_60;
      if (((char)lVar6 != '\0') && (ppppppplVar11 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
LAB_00329c09:
      *(void*)(arg1 + 1) = 1;
LAB_00329c16:
      ppppppplVar12 = (int64_t *******)*arg1;
      if (((char)local_58 != '\0') && (local_60 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
  } while (ppppppplVar12 != (int64_t *******)0x0);
  if ((*arg1 == 0) || (((uint64_t)local_70 & 1) == 0)) goto LAB_00329ff5;
  if (this_ptr != (int64_t *******)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  local_80 = this_ptr;
  do {
    ppppppplVar10 = local_80;
    (*(*local_80)[0x6e])();
    if (local_60 == ppppppplVar10) {
      if (((local_38[0] == '\0') && (local_60 != (int64_t *******)0x0)) && ((char)local_58 != '\0')
         ) {
        local_38[0] = '\x01';
        goto LAB_00329cd7;
      }
    }
    else {
      local_80 = local_60;
      ppppppplVar10 = local_60;
      if ((char)local_58 == '\0') {
        if (local_38[0] == '\0') {
          pcVar7 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar7 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_00329cd7:
        local_38[0] = '\x01';
        pcVar7 = (char *)&local_58;
      }
      *pcVar7 = '\0';
    }
    if (((char)local_58 != '\0') && (local_60 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if ((g_026f7020 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_0270aa58 = FUN_00015ff0();
      g_0270aa40 = "MDEditorViewController";
      g_0270aa48 = 0x1e8;
      g_0270aa50 = FUN_00074eb0;
      g_0270aa60 = 0;
      ram_000000000270aa68 = 0;
      g_0270aa70 = 0;
      g_0270aae8 = 0;
      ram_000000000270aaf0 = 0;
      g_0270aaf8 = 0;
      g_0270aafa = 1;
      g_0270aa78 = 0;
      ram_000000000270aa80 = 0;
      g_0270aa88 = 0;
      ram_000000000270aa90 = 0;
      g_0270aa98 = 0;
      ram_000000000270aaa0 = 0;
      g_0270aaa8 = 0;
      ram_000000000270aab0 = 0;
      g_0270aab8 = 0;
      ram_000000000270aac0 = 0;
      g_0270aac8 = 0;
      ram_000000000270aad0 = 0;
      g_0270aad8 = 0;
      ram_000000000270aae0 = 0;
      g_0270ab03 = 0;
      g_0270aafb = 0;
      ___cxa_guard_release();
    }
    ppppppplVar11 = (int64_t *******)&g_02802688;
    if (ppppppplVar10 != (int64_t *******)0x0) {
      (*(*ppppppplVar10)[0x6c])();
      cVar1 = FUN_00e85ea0();
      ppppppplVar11 = (int64_t *******)&local_80;
      if (cVar1 == '\0') {
        ppppppplVar11 = (int64_t *******)&g_02802688;
      }
    }
    ppppppplVar10 = local_80;
    if (*ppppppplVar11 != (int64_t ******)0x0) {
      if ((local_38[0] == '\0') && (local_80 != (int64_t *******)0x0)) {
        FUN_00d50b00();
      }
      goto joined_r0x00329e4d;
    }
  } while (local_80 != (int64_t *******)0x0);
  ppppppplVar10 = (int64_t *******)0x0;
joined_r0x00329e4d:
  if (this_ptr != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  if (ppppppplVar10 == (int64_t *******)0x0) goto LAB_00329ff5;
  FUN_002533b0();
  if ((char)local_58 == '\0') {
    if (local_60 != (int64_t *******)0x0) {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00329eb0;
    }
  }
  else if (local_60 != (int64_t *******)0x0) {
LAB_00329eb0:
    local_58._0_1_ = '\0';
    local_50 = local_60;
    local_40 = 0;
    local_48 = 0;
    if (0 < *(int *)((int64_t)local_60 + 0xc)) {
      iVar2 = 0;
      do {
        pvVar3 = _pthread_getspecific((void*)ppppppplVar11);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        (*(*this_ptr)[0x14b])();
        ppppppplVar10 = local_80;
        if (local_78 == '\0') {
          if (local_80 != (int64_t *******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        FUN_0054e980();
        if (ppppppplVar10 != (int64_t *******)0x0) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        iVar2 = iVar2 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar2);
      } while (iVar2 < *(int *)((int64_t)local_60 + 0xc));
    }
    FUN_00275ca0();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00329ff5:
  FUN_00d50b20();
  return;
}

