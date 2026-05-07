// Function: FUN_00329480
// Address: 00329480
// Size: 2860 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00329480(char param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  char *pcVar7;
  pthread_key_t pVar8;
  longlong ******pppppplVar9;
  longlong *******ppppppplVar10;
  longlong *******ppppppplVar11;
  longlong *******ppppppplVar12;
  longlong *unaff_RSI;
  longlong *******unaff_RDI;
  float fVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 uVar17;
  double local_c0;
  undefined8 local_98;
  longlong *******local_80;
  char local_78;
  undefined8 local_70;
  longlong *******local_60;
  longlong ******local_58;
  longlong *******local_50;
  undefined8 local_48;
  int local_40;
  char local_38 [8];
  undefined8 uVar16;
  
  FUN_00d23310();
  ppppppplVar10 = &local_58;
  local_80 = (longlong *******)CONCAT71(local_80._1_7_,(char)local_58);
  ppppppplVar11 = ppppppplVar10;
  if ((char)local_58 == '\0') {
    ppppppplVar11 = (longlong *******)&local_80;
  }
  *(undefined1 *)ppppppplVar11 = 0;
  if (((char)local_58 != '\0') && (local_60 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)ppppppplVar10);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar4 = (longlong *)FUN_00e8b990();
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  if (((char)local_80 != '\0') && (local_60 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  FUN_01d3abf0();
  uVar15 = FUN_01e466c0();
  local_70 = (longlong ******)((ulonglong)local_70._4_4_ << 0x20);
  do {
    local_98._4_4_ = (float)((ulonglong)uVar15 >> 0x20);
    local_98._0_4_ = (float)uVar15;
    FUN_01d3abf0();
    uVar16 = FUN_01e466c0();
    fVar13 = (float)uVar16;
    iVar2 = FUN_01d3a5a0();
    if (iVar2 == 6) break;
    if ((((float)local_98 != fVar13) || (NAN((float)local_98) || NAN(fVar13))) ||
       ((float)((ulonglong)uVar16 >> 0x20) != local_98._4_4_)) {
      local_c0 = (double)FUN_01a34bd0(fVar13);
      uVar5 = FUN_01d3b590();
      if (((uVar5 & 8) == 0) && (cVar1 = (*(code *)(*unaff_RDI[0x2d])[0x79])(), cVar1 != '\0')) {
        (*(code *)(*unaff_RDI)[0x130])();
        local_c0 = (double)(*(code *)(*local_60)[0x6e])(SUB84(local_c0,0));
        if (((char)local_58 != '\0') && (local_60 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*plVar4 + 0x3b8))();
      if ((longlong *******)*param_2 != (longlong *******)0x0) {
        local_58._0_1_ = '\0';
        local_60 = (longlong *******)0x0;
        local_48 = 0xffffffff;
        local_40 = 0;
        local_50 = (longlong *******)*param_2;
        while( true ) {
          lVar6 = (longlong)(int)local_48;
          iVar2 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar2);
          if (*(int *)((longlong)local_50 + 0xc) <= iVar2) break;
          pppppplVar9 = local_50[2];
          local_60 = (longlong *******)pppppplVar9[lVar6 + 1];
          if (param_1 == '\0') {
            pvVar3 = _pthread_getspecific((pthread_key_t)pppppplVar9);
            pVar8 = (pthread_key_t)pppppplVar9;
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_00362960();
            if (cVar1 == '\0') {
              pvVar3 = _pthread_getspecific(pVar8);
              ppppppplVar10 = local_60;
              if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                ppppppplVar10 =
                     (longlong *******)local_60[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
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
                     (longlong *******)local_60[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              local_70 = ppppppplVar10[8];
            }
            pvVar3 = _pthread_getspecific(pVar8);
            ppppppplVar10 = local_60;
            if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              ppppppplVar10 =
                   (longlong *******)local_60[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
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
                     (longlong *******)local_60[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              local_98._0_4_ = SUB84(ppppppplVar10[7],0);
            }
            uVar14 = (int)local_70;
            uVar17 = (int)((ulonglong)local_70 >> 0x20);
            if ((double)local_70 <= local_c0) {
              uVar14 = SUB84(local_c0,0);
              uVar17 = (int)((ulonglong)local_c0 >> 0x20);
            }
LAB_00329a4c:
            local_70 = (longlong ******)CONCAT44(uVar17,uVar14);
          }
          else {
            pvVar3 = _pthread_getspecific((pthread_key_t)pppppplVar9);
            pVar8 = (pthread_key_t)pppppplVar9;
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_00362960();
            if (cVar1 == '\0') {
              pvVar3 = _pthread_getspecific(pVar8);
              ppppppplVar10 = local_60;
              if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                ppppppplVar10 =
                     (longlong *******)local_60[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              local_98 = ppppppplVar10[8];
              if ((double)local_98 <= (double)ppppppplVar10[7]) {
                uVar14 = SUB84(ppppppplVar10[10],0);
                uVar17 = (undefined4)((ulonglong)ppppppplVar10[10] >> 0x20);
                goto LAB_00329981;
              }
              pppppplVar9 = ppppppplVar10[10];
              uVar14 = SUB84(pppppplVar9,0);
              uVar17 = (undefined4)((ulonglong)pppppplVar9 >> 0x20);
              if (((double)ppppppplVar10[9] <= (double)pppppplVar9 &&
                   (double)pppppplVar9 != (double)ppppppplVar10[9]) &&
                 ((double)local_98 < (double)pppppplVar9)) goto LAB_00329981;
            }
            else {
              pvVar3 = _pthread_getspecific(pVar8);
              ppppppplVar10 = local_60;
              if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                ppppppplVar10 =
                     (longlong *******)local_60[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              uVar14 = SUB84(ppppppplVar10[7],0);
              uVar17 = (undefined4)((ulonglong)ppppppplVar10[7] >> 0x20);
LAB_00329981:
              local_98 = (longlong ******)CONCAT44(uVar17,uVar14);
            }
            pvVar3 = _pthread_getspecific(pVar8);
            ppppppplVar10 = local_60;
            if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              ppppppplVar10 =
                   (longlong *******)local_60[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
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
                     (longlong *******)local_60[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              uVar14 = (int)ppppppplVar10[8];
              uVar17 = (int)((ulonglong)ppppppplVar10[8] >> 0x20);
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
      ppppppplVar10 = (longlong *******)CONCAT71((int7)((ulonglong)ppppppplVar10 >> 8),1);
      local_70 = (longlong ******)CONCAT44(local_70._4_4_,(int)ppppppplVar10);
      (*(code *)(*unaff_RDI)[0xc4])();
      uVar15 = uVar16;
    }
    (*(code *)(*unaff_RDI)[0xcb])();
    ppppppplVar11 = (longlong *******)*unaff_RSI;
    if (ppppppplVar11 == local_60) {
      if (((char)unaff_RSI[1] != '\0') || (local_60 == (longlong *******)0x0)) goto LAB_00329c16;
      ppppppplVar12 = ppppppplVar11;
      if ((char)local_58 == '\0') {
        FUN_00d50b00();
        goto LAB_00329c09;
      }
LAB_00329590:
      *(undefined1 *)(unaff_RSI + 1) = 1;
    }
    else {
      lVar6 = unaff_RSI[1];
      if ((char)local_58 != '\0') {
        *unaff_RSI = (longlong)local_60;
        ppppppplVar12 = local_60;
        if (((char)lVar6 != '\0') && (ppppppplVar11 != (longlong *******)0x0)) {
          FUN_00d50b20();
          ppppppplVar12 = (longlong *******)*unaff_RSI;
        }
        goto LAB_00329590;
      }
      if (local_60 != (longlong *******)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)local_60;
      if (((char)lVar6 != '\0') && (ppppppplVar11 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
LAB_00329c09:
      *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_00329c16:
      ppppppplVar12 = (longlong *******)*unaff_RSI;
      if (((char)local_58 != '\0') && (local_60 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
    }
  } while (ppppppplVar12 != (longlong *******)0x0);
  if ((*unaff_RSI == 0) || (((ulonglong)local_70 & 1) == 0)) goto LAB_00329ff5;
  if (unaff_RDI != (longlong *******)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  local_80 = unaff_RDI;
  do {
    ppppppplVar10 = local_80;
    (*(code *)(*local_80)[0x6e])();
    if (local_60 == ppppppplVar10) {
      if (((local_38[0] == '\0') && (local_60 != (longlong *******)0x0)) && ((char)local_58 != '\0')
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
    if (((char)local_58 != '\0') && (local_60 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_026f7020 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_0270aa58 = FUN_00015ff0();
      _DAT_0270aa40 = "MDEditorViewController";
      _DAT_0270aa48 = 0x1e8;
      _DAT_0270aa50 = FUN_00074eb0;
      _DAT_0270aa60 = 0;
      uRam000000000270aa68 = 0;
      _DAT_0270aa70 = 0;
      _DAT_0270aae8 = 0;
      uRam000000000270aaf0 = 0;
      _DAT_0270aaf8 = 0;
      DAT_0270aafa = 1;
      _DAT_0270aa78 = 0;
      uRam000000000270aa80 = 0;
      _DAT_0270aa88 = 0;
      uRam000000000270aa90 = 0;
      _DAT_0270aa98 = 0;
      uRam000000000270aaa0 = 0;
      _DAT_0270aaa8 = 0;
      uRam000000000270aab0 = 0;
      _DAT_0270aab8 = 0;
      uRam000000000270aac0 = 0;
      _DAT_0270aac8 = 0;
      uRam000000000270aad0 = 0;
      _DAT_0270aad8 = 0;
      uRam000000000270aae0 = 0;
      DAT_0270ab03 = 0;
      _DAT_0270aafb = 0;
      ___cxa_guard_release();
    }
    ppppppplVar11 = (longlong *******)&DAT_02802688;
    if (ppppppplVar10 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar10)[0x6c])();
      cVar1 = FUN_00e85ea0();
      ppppppplVar11 = (longlong *******)&local_80;
      if (cVar1 == '\0') {
        ppppppplVar11 = (longlong *******)&DAT_02802688;
      }
    }
    ppppppplVar10 = local_80;
    if (*ppppppplVar11 != (longlong ******)0x0) {
      if ((local_38[0] == '\0') && (local_80 != (longlong *******)0x0)) {
        FUN_00d50b00();
      }
      goto joined_r0x00329e4d;
    }
  } while (local_80 != (longlong *******)0x0);
  ppppppplVar10 = (longlong *******)0x0;
joined_r0x00329e4d:
  if (unaff_RDI != (longlong *******)0x0) {
    FUN_00d50b20();
  }
  if (ppppppplVar10 == (longlong *******)0x0) goto LAB_00329ff5;
  FUN_002533b0();
  if ((char)local_58 == '\0') {
    if (local_60 != (longlong *******)0x0) {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00329eb0;
    }
  }
  else if (local_60 != (longlong *******)0x0) {
LAB_00329eb0:
    local_58._0_1_ = '\0';
    local_50 = local_60;
    local_40 = 0;
    local_48 = 0;
    if (0 < *(int *)((longlong)local_60 + 0xc)) {
      iVar2 = 0;
      do {
        pvVar3 = _pthread_getspecific((pthread_key_t)ppppppplVar11);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        (*(code *)(*unaff_RDI)[0x14b])();
        ppppppplVar10 = local_80;
        if (local_78 == '\0') {
          if (local_80 != (longlong *******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        FUN_0054e980();
        if (ppppppplVar10 != (longlong *******)0x0) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        iVar2 = iVar2 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar2);
      } while (iVar2 < *(int *)((longlong)local_60 + 0xc));
    }
    FUN_00275ca0();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00329ff5:
  FUN_00d50b20();
  return;
}


