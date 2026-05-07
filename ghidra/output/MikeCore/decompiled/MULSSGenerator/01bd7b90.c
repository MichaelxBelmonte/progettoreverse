// Function: FUN_01bd7b90
// Address: 01bd7b90
// Size: 2891 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"


/* WARNING: Removing unreachable block (ram,0x01bd84f7) */
/* WARNING: Removing unreachable block (ram,0x01bd8503) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bd7b90(undefined8 param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong **pplVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  pthread_key_t pVar10;
  longlong **pplVar11;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  undefined7 uVar12;
  bool bVar13;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  int local_60;
  undefined8 *local_58;
  longlong *local_50;
  char local_48;
  undefined4 local_3c;
  
  uVar1 = *(uint *)(*(longlong *)(unaff_RDI + 0x78) + 0xc);
  pplVar4 = (longlong **)(ulonglong)uVar1;
  if (uVar1 == 1) {
    if (*(longlong *)(unaff_RDI + 0x98) != 0) {
      unaff_R13 = 0;
      FUN_00d50130();
      if (*(longlong *)(unaff_RDI + 0x98) != 0) {
        *(undefined8 *)(unaff_RDI + 0x98) = 0;
        unaff_R13 = 0;
        FUN_00d50b20();
      }
    }
    FUN_00d23310();
    pplVar4 = &local_78;
    pVar10 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),(char)local_78);
    pplVar11 = &local_50;
    if ((char)local_78 != '\0') {
      pplVar11 = pplVar4;
    }
    local_50 = (longlong *)CONCAT71(local_50._1_7_,(char)local_78);
    *(undefined1 *)pplVar11 = 0;
    if (((char)local_78 != '\0') && (local_80 != 0)) {
      pplVar4 = (longlong **)FUN_00d50b20();
    }
    if (local_80 != 0) {
      if ((char)local_50 == '\0') {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e78c0();
      if (local_80 == 0) {
        bVar13 = false;
      }
      else {
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pplVar4 = &local_50;
        FUN_012e78c0();
        plVar6 = local_50;
        if ((DAT_0270c820 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          _DAT_027e77e8 = FUN_0015ef90();
          _DAT_027e77d0 = "MULSSGenerator";
          _DAT_027e77d8 = 0x70;
          pVar10 = 0x15ef30;
          _DAT_027e77e0 = FUN_0015ef30;
          _DAT_027e77f0 = 0;
          uRam00000000027e77f8 = 0;
          _DAT_027e7800 = 0;
          uRam00000000027e7808 = 0;
          _DAT_027e7810 = 0;
          uRam00000000027e7818 = 0;
          _DAT_027e7820 = 0;
          uRam00000000027e7828 = 0;
          _DAT_027e7830 = 0;
          uRam00000000027e7838 = 0;
          _DAT_027e7840 = 0;
          uRam00000000027e7848 = 0;
          _DAT_027e7850 = 0;
          uRam00000000027e7858 = 0;
          _DAT_027e7860 = 0;
          uRam00000000027e7868 = 0;
          _DAT_027e7870 = 0;
          uRam00000000027e7878 = 0;
          _DAT_027e7880 = 0;
          uRam00000000027e7888 = 0;
          _DAT_027e7890 = 0;
          ___cxa_guard_release();
        }
        if (plVar6 == (longlong *)0x0) {
LAB_01bd8284:
          pplVar4 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar6 + 0x360))();
          cVar2 = FUN_00e85ea0();
          if (cVar2 == '\0') goto LAB_01bd8284;
        }
        bVar13 = *pplVar4 != (longlong *)0x0;
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (((char)local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (bVar13) {
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        if (local_80 == 0) {
          puVar9 = (undefined8 *)0x0;
          local_88 = 0;
joined_r0x01bd8359:
          if (((char)local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar12 = (undefined7)((ulonglong)unaff_R13 >> 8);
          local_88 = local_80;
          if ((char)local_78 == '\0') {
            FUN_00d50b00();
            puVar9 = (undefined8 *)CONCAT71(uVar12,1);
            goto joined_r0x01bd8359;
          }
          puVar9 = (undefined8 *)CONCAT71(uVar12,1);
        }
        if (local_88 == 0) goto LAB_01bd83be;
        local_58 = puVar9;
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c6cb0();
        if (local_80 == 0) {
          bVar13 = false;
          lVar7 = 0;
        }
        else {
          if ((((char)local_78 == '\0') && (FUN_00d50b00(), (char)local_78 != '\0')) &&
             (local_80 != 0)) {
            FUN_00d50b20();
          }
          pvVar5 = _pthread_getspecific(pVar10);
          lVar7 = local_80;
          if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar7 = *(longlong *)(local_80 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          if (*(longlong *)(lVar7 + 0x58) != 0) {
            pvVar5 = _pthread_getspecific(pVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            puVar9 = (undefined8 *)FUN_017ed3a0();
            if (local_80 == local_88) {
              if (((char)local_58 == '\0') && (local_80 != 0)) {
                local_3c = CONCAT31(local_3c._1_3_,1);
                if ((char)local_78 != '\0') goto LAB_01bd85ed;
                local_3c = CONCAT31(local_3c._1_3_,1);
                puVar9 = (undefined8 *)FUN_00d50b00();
              }
              else {
                local_3c = CONCAT31(local_3c._1_3_,(char)local_58);
                puVar9 = local_58;
              }
LAB_01bd85d9:
              if (((char)local_78 != '\0') && (local_80 != 0)) {
                puVar9 = (undefined8 *)FUN_00d50b20();
              }
            }
            else {
              if ((char)local_78 == '\0') {
                if (local_80 != 0) {
                  puVar9 = (undefined8 *)FUN_00d50b00();
                }
                local_3c = CONCAT31(local_3c._1_3_,1);
                if ((char)local_58 == '\0') {
                  local_88 = local_80;
                }
                else {
                  local_88 = local_80;
                  puVar9 = (undefined8 *)FUN_00d50b20();
                }
                goto LAB_01bd85d9;
              }
              local_3c = CONCAT31(local_3c._1_3_,1);
              if ((char)local_58 == '\0') {
                local_88 = local_80;
              }
              else {
                local_88 = local_80;
                puVar9 = (undefined8 *)FUN_00d50b20();
              }
            }
LAB_01bd85ed:
            local_58 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar9 >> 8),(undefined1)local_3c);
          }
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_017f2970();
          if (cVar2 == '\0') {
            bVar13 = false;
            lVar7 = 0;
            FUN_00d50b20();
          }
          else {
            bVar13 = true;
            lVar7 = local_80;
          }
        }
        local_3c = 0;
        if (((char)local_58 == '\0') || (local_88 == 0)) goto LAB_01bd84c6;
        FUN_00d50b20();
      }
      else {
LAB_01bd83be:
        bVar13 = false;
        lVar7 = 0;
      }
      local_3c = 0;
      goto LAB_01bd84c6;
    }
LAB_01bd8139:
    local_3c = (undefined4)CONCAT71((int7)((ulonglong)pplVar4 >> 8),1);
    bVar13 = false;
    lVar7 = 0;
  }
  else {
    if ((int)uVar1 < 2) goto LAB_01bd8139;
    local_3c = (undefined4)CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    if (*(longlong *)(unaff_RDI + 0x98) == 0) {
      plVar6 = (longlong *)FUN_00e8fc40();
      FUN_01bdae30();
      (**(code **)(*plVar6 + 0x18))();
      lVar7 = *(longlong *)(unaff_RDI + 0x98);
      *(longlong **)(unaff_RDI + 0x98) = plVar6;
      if (lVar7 != 0) {
        FUN_00d50b20();
        plVar6 = *(longlong **)(unaff_RDI + 0x98);
      }
      plVar6[3] = unaff_RDI;
    }
    puVar9 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar10 = 0x2572358;
    *puVar9 = &DAT_02572358;
    (*DAT_02572370)();
    local_58 = puVar9;
    if (*(longlong *)(unaff_RDI + 0x78) != 0) {
      local_78._0_1_ = '\0';
      local_80 = 0;
      local_68 = 0xffffffff;
      local_60 = 0;
      local_68._4_4_ = 0;
      local_70 = *(longlong *)(unaff_RDI + 0x78);
      while( true ) {
        if (local_68._4_4_ != 0) {
          if (local_68._4_4_ < 1) {
            iVar3 = -local_68._4_4_;
          }
          else {
            iVar3 = (int)local_68 - local_68._4_4_;
            local_68 = CONCAT44(local_68._4_4_,iVar3);
            FUN_00d23690();
            local_60 = local_60 + local_68._4_4_;
            iVar3 = 0;
          }
          local_68 = CONCAT44(iVar3,(int)local_68);
        }
        lVar7 = (longlong)(int)local_68;
        iVar3 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar3);
        if (*(int *)(local_70 + 0xc) <= iVar3) break;
        local_80 = *(longlong *)(*(longlong *)(local_70 + 0x10) + 8 + lVar7 * 8);
        pvVar5 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_70 + 0x10));
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        plVar6 = local_50;
        if ((DAT_0270c820 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          _DAT_027e77e8 = FUN_0015ef90();
          _DAT_027e77d0 = "MULSSGenerator";
          _DAT_027e77d8 = 0x70;
          _DAT_027e77e0 = FUN_0015ef30;
          _DAT_027e77f0 = 0;
          uRam00000000027e77f8 = 0;
          _DAT_027e7800 = 0;
          uRam00000000027e7808 = 0;
          _DAT_027e7810 = 0;
          uRam00000000027e7818 = 0;
          _DAT_027e7820 = 0;
          uRam00000000027e7828 = 0;
          _DAT_027e7830 = 0;
          uRam00000000027e7838 = 0;
          _DAT_027e7840 = 0;
          uRam00000000027e7848 = 0;
          _DAT_027e7850 = 0;
          uRam00000000027e7858 = 0;
          _DAT_027e7860 = 0;
          uRam00000000027e7868 = 0;
          _DAT_027e7870 = 0;
          uRam00000000027e7878 = 0;
          _DAT_027e7880 = 0;
          uRam00000000027e7888 = 0;
          _DAT_027e7890 = 0;
          ___cxa_guard_release();
        }
        pplVar4 = (longlong **)&DAT_02802688;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar4 = &local_50;
          if (cVar2 == '\0') {
            pplVar4 = (longlong **)&DAT_02802688;
          }
        }
        plVar6 = *pplVar4;
        if (*(char *)(pplVar4 + 1) == '\0') {
          if (plVar6 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar4 + 1) = 0;
        }
        pVar10 = (pthread_key_t)pplVar4;
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar6 != (longlong *)0x0) {
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c6cb0();
          if (local_50 != (longlong *)0x0) {
            if (((local_48 == '\0') && (FUN_00d50b00(), local_48 != '\0')) &&
               (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar5 = _pthread_getspecific(pVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_017f2970();
            if (cVar2 != '\0') {
              pvVar5 = _pthread_getspecific(pVar10);
              lVar7 = local_80;
              if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                lVar7 = *(longlong *)
                         (local_80 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
              }
              if (*(longlong *)(lVar7 + 0x58) != 0) {
                pvVar5 = _pthread_getspecific(pVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_017ed3a0();
                if (plVar6 != local_50) {
                  plVar6 = local_50;
                  if (local_48 != '\0') {
                    FUN_00d50b20();
                    goto LAB_01bd8049;
                  }
                  if (local_50 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  FUN_00d50b20();
                }
                if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
LAB_01bd8049:
              local_48 = '\0';
              local_50 = plVar6;
              FUN_00d235a0();
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
          }
        }
        if (plVar6 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      lVar7 = local_70;
      FUN_000be170();
      pVar10 = (pthread_key_t)lVar7;
    }
    FUN_01bd23c0();
    if (*(longlong *)(*(longlong *)(unaff_RDI + 0x98) + 0x20) == 0) {
      bVar13 = false;
      local_80 = 0;
    }
    else {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar7 = *(longlong *)(*(longlong *)(unaff_RDI + 0x98) + 0x20);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c6cb0();
      if (local_80 == 0) {
        local_80 = 0;
        bVar13 = false;
      }
      else if ((char)local_78 == '\0') {
        FUN_00d50b00();
        bVar13 = true;
        if (((char)local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78._0_1_ = '\0';
        bVar13 = true;
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    lVar7 = local_80;
    if (local_58 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  local_80 = 0;
LAB_01bd84c6:
  FUN_01d2a770();
  FUN_01bd69c0();
  if ((bVar13) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_3c == '\0' && local_80 != 0) {
    FUN_00d50b20();
  }
  return;
}


