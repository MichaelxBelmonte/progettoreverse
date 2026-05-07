// Function: FUN_006ca460
// Address: 006ca460
// Size: 2729 bytes
// Class: MDTrackInsp


/* WARNING: Removing unreachable block (ram,0x006cacd5) */
/* WARNING: Removing unreachable block (ram,0x006cace1) */
/* WARNING: Removing unreachable block (ram,0x006ca8a9) */
/* WARNING: Removing unreachable block (ram,0x006ca8b5) */
/* WARNING: Removing unreachable block (ram,0x006cab56) */
/* WARNING: Removing unreachable block (ram,0x006cab62) */
/* WARNING: Removing unreachable block (ram,0x006cae49) */
/* WARNING: Removing unreachable block (ram,0x006cae55) */

void FUN_006ca460(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  code *pcVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong **pplVar7;
  longlong lVar8;
  undefined8 *puVar9;
  pthread_key_t pVar10;
  longlong lVar11;
  longlong **pplVar12;
  int iVar13;
  int iVar14;
  longlong *unaff_RDI;
  longlong *plVar15;
  char cVar16;
  bool bVar17;
  int local_ac;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong *local_40;
  char local_38;
  
  plVar5 = local_78;
  FUN_006cb500();
  if (((char)local_70 == '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x26] + 0xb28))();
  if (((((char)local_70 == '\0') && (local_78 != (longlong *)0x0)) &&
      (FUN_00d50b00(), (char)local_70 != '\0')) && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  iVar14 = *(int *)((longlong)local_78 + 0xc);
  if (iVar14 == 1) {
    FUN_00d23310();
    pVar10 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),(char)local_70);
    pplVar12 = &local_40;
    if ((char)local_70 != '\0') {
      pplVar12 = &local_70;
    }
    local_40 = (longlong *)CONCAT71(local_40._1_7_,(char)local_70);
    *(undefined1 *)pplVar12 = 0;
    if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6040();
    if (((char)local_40 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar14 = *(int *)((longlong)local_78 + 0xc);
  }
  if (iVar14 == 0) {
    local_ac = -1;
    (**(code **)(*(longlong *)unaff_RDI[0x2a] + 0x998))();
  }
  else {
    FUN_00d23310();
    pplVar12 = &local_70;
    local_50 = (char)local_70;
    pplVar7 = (longlong **)&local_50;
    if ((char)local_70 != '\0') {
      pplVar7 = pplVar12;
    }
    *(undefined1 *)pplVar7 = 0;
    if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)pplVar12);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e60a0();
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_50 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_70._0_1_ = '\0';
    local_78 = (longlong *)0x0;
    local_68 = plVar5;
    local_60 = 0xffffffff;
    local_58 = 0;
    iVar14 = -1;
    local_60._4_4_ = 0;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar13 = -local_60._4_4_;
        }
        else {
          iVar13 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar13);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar13 = 0;
        }
        local_60 = CONCAT44(iVar13,(int)local_60);
      }
      lVar8 = (longlong)(int)local_60;
      iVar13 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar13);
      if (*(int *)((longlong)local_68 + 0xc) <= iVar13) break;
      lVar11 = local_68[2];
      local_78 = *(longlong **)(lVar11 + 8 + lVar8 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)lVar11);
      pVar10 = (pthread_key_t)lVar11;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      if (local_40 != (longlong *)0x0) {
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e60a0();
      plVar15 = (longlong *)CONCAT71(uStack_4f,local_50);
      if (local_48 == '\0') {
        cVar16 = plVar1 == (longlong *)0x0;
        if (plVar15 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_006ca7d5;
        }
      }
      else {
        local_48 = '\0';
LAB_006ca7d5:
        cVar16 = plVar1 == (longlong *)0x0 && plVar15 == (longlong *)0x0;
        if ((plVar1 != (longlong *)0x0) && (plVar15 != (longlong *)0x0)) {
          local_38 = '\0';
          local_40 = plVar15;
          cVar16 = (**(code **)(*plVar1 + 0x50))();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (plVar15 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if (cVar16 == '\0') {
        iVar14 = -2;
      }
    }
    FUN_000be170();
    bVar17 = iVar14 != -2;
    local_ac = (bVar17 - 2) + (uint)bVar17;
    if ((bVar17) && (plVar1 != (longlong *)0x0)) {
      local_ac = FUN_0141b8d0();
      local_ac = local_ac + 1;
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_50 = '\0';
    plVar15 = unaff_RDI;
    local_40 = unaff_RDI;
    do {
      (**(code **)(*plVar15 + 0x370))();
      if (local_78 == plVar15) {
        if (((local_50 == '\0') && (local_78 != (longlong *)0x0)) && ((char)local_70 != '\0'))
        goto LAB_006ca937;
      }
      else {
        local_40 = local_78;
        plVar15 = local_78;
        if ((char)local_70 == '\0') {
          if (local_50 == '\0') {
            pplVar12 = (longlong **)&local_50;
          }
          else {
            FUN_00d50b20();
            pplVar12 = (longlong **)&local_50;
          }
        }
        else {
          if (local_50 != '\0') {
            FUN_00d50b20();
          }
LAB_006ca937:
          local_50 = '\x01';
          pplVar12 = &local_70;
        }
        *(undefined1 *)pplVar12 = 0;
      }
      if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00082eb0();
      pplVar12 = (longlong **)&DAT_02802688;
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 0x360))();
        cVar16 = FUN_00e85ea0();
        pplVar12 = &local_40;
        if (cVar16 == '\0') {
          pplVar12 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar12 != (longlong *)0x0) {
        if ((local_50 == '\0') && (plVar15 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        break;
      }
    } while (plVar15 != (longlong *)0x0);
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    bVar17 = true;
    if (plVar15 == (longlong *)0x0) {
LAB_006cac83:
      bVar3 = false;
    }
    else {
      FUN_007646f0();
      if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pcVar4 = DAT_02572370;
      if (local_78 == (longlong *)0x0) goto LAB_006cac83;
      local_70._0_1_ = '\0';
      local_78 = (longlong *)0x0;
      local_68 = plVar5;
      local_60 = 0xffffffff;
      local_58 = 0;
      bVar3 = false;
      puVar9 = (undefined8 *)0x0;
      local_60._4_4_ = 0;
      while( true ) {
        if (local_60._4_4_ != 0) {
          if (local_60._4_4_ < 1) {
            iVar14 = -local_60._4_4_;
          }
          else {
            iVar14 = (int)local_60 - local_60._4_4_;
            local_60 = CONCAT44(local_60._4_4_,iVar14);
            FUN_00d23690();
            local_58 = local_58 + local_60._4_4_;
            iVar14 = 0;
          }
          local_60 = CONCAT44(iVar14,(int)local_60);
        }
        lVar8 = (longlong)(int)local_60;
        iVar14 = (int)local_60 + 1;
        local_60 = CONCAT44(local_60._4_4_,iVar14);
        if (*(int *)((longlong)local_68 + 0xc) <= iVar14) break;
        local_78 = *(longlong **)(local_68[2] + 8 + lVar8 * 8);
        FUN_007646f0();
        FUN_012d2830();
        plVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          if (puVar9 == (undefined8 *)0x0) {
            puVar9 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar9 = &DAT_02572358;
            (*pcVar4)();
            bVar3 = true;
          }
          (**(code **)(*plVar2 + 0x658))();
          plVar2 = (longlong *)CONCAT71(uStack_4f,local_50);
          if (local_48 == '\0') {
            if (plVar2 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_38 = '\0';
          local_40 = plVar2;
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      FUN_000be170();
      if (puVar9 != (undefined8 *)0x0) {
        if (plVar5 != (longlong *)0x0) {
          FUN_00b2ada0();
          FUN_00d23310();
          pplVar12 = &local_70;
          if ((char)local_70 == '\0') {
            pplVar12 = &local_40;
          }
          local_40 = (longlong *)CONCAT71(local_40._1_7_,(char)local_70);
          *(undefined1 *)pplVar12 = 0;
          if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00b33590();
          FUN_00b2b4a0();
          if (((char)local_40 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00b2b3b0();
        }
        bVar17 = false;
      }
    }
    (**(code **)(*(longlong *)unaff_RDI[0x2a] + 0x998))();
    if (plVar15 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (bVar3 && !bVar17) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (!bVar17) goto LAB_006cae63;
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00b2b1b0();
    if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_78 != (longlong *)0x0) {
      FUN_00b2b080();
      FUN_00b2ad50();
    }
  }
LAB_006cae63:
  if (local_ac < -1) {
    FUN_01d6ed40();
    lVar8 = DAT_02726ce0;
    plVar1 = (longlong *)unaff_RDI[0x2a];
    if (DAT_02726ce0 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x958))();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d6ed40();
  }
  FUN_006db470();
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


