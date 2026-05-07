// Function: FUN_01a67a50
// Address: 01a67a50
// Size: 2277 bytes
// Class: MUTool


undefined8 * FUN_01a67a50(pthread_key_t param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  void *pvVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  undefined7 uVar10;
  pthread_key_t pVar11;
  ulonglong *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar15;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_78;
  char local_70;
  ulonglong local_68;
  char local_60;
  longlong *local_58;
  ulonglong local_50;
  undefined4 local_48;
  undefined8 local_40;
  char local_38 [8];
  
  FUN_01a66e80();
  plVar15 = local_78;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012521f0(param_2,0,&local_a0,&local_98);
  plVar5 = local_58;
  puVar12 = &local_50;
  local_68._0_1_ = (char)local_50;
  puVar8 = &local_68;
  if ((char)local_50 != '\0') {
    puVar8 = puVar12;
  }
  *(undefined1 *)puVar8 = 0;
  if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar11 = (pthread_key_t)puVar12;
  if (((char)local_68 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_70 != '\0') && (plVar15 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  local_58 = param_2;
  FUN_00e7b970();
  local_d0 = local_58;
  local_58 = local_98;
  FUN_00e7b970();
  local_c8 = local_58;
  local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
  if (local_d0._4_4_ != 0) {
    cVar6 = FUN_00e7c650();
    if (cVar6 != '\0') {
      iVar4 = local_c8._4_4_;
      goto joined_r0x01a67bdd;
    }
LAB_01a67c5f:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    goto LAB_01a68317;
  }
  iVar4 = (int)((ulonglong)local_c8 >> 0x20);
joined_r0x01a67bdd:
  if (iVar4 != 0) {
    local_78 = (longlong *)((ulonglong)local_78 & 0xffffffff00000000);
    cVar6 = FUN_00e7c650();
    if (cVar6 == '\0') goto LAB_01a67c5f;
  }
  local_70 = '\0';
  local_78 = (longlong *)0x0;
  local_e0 = local_a0;
  local_d8 = local_98;
  FUN_01a66e80();
  plVar15 = local_58;
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar13 = &local_e0;
  uVar9 = FUN_01253c10(puVar13,&local_78,&local_d8,0);
  pVar11 = (pthread_key_t)puVar13;
  if (((char)local_50 != '\0') && (plVar15 != (longlong *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if (local_78 == (longlong *)0x0) {
    uVar9 = FUN_00d51d20();
    plVar14 = local_58;
    cVar6 = local_70;
    plVar15 = local_78;
    if (local_78 == local_58) {
      if ((local_70 != '\0') || (local_58 == (longlong *)0x0)) goto LAB_01a67d35;
      if ((char)local_50 == '\0') {
        uVar9 = FUN_00d50b00();
        goto LAB_01a67d31;
      }
LAB_01a67cfe:
      local_70 = '\x01';
    }
    else {
      if ((char)local_50 != '\0') {
        local_78 = local_58;
        if ((local_70 != '\0') && (plVar15 != (longlong *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        goto LAB_01a67cfe;
      }
      if (local_58 != (longlong *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      local_78 = plVar14;
      if ((cVar6 != '\0') && (plVar15 != (longlong *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
LAB_01a67d31:
      local_70 = '\x01';
LAB_01a67d35:
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
    }
    if (local_78 != (longlong *)0x0) goto LAB_01a67d56;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
LAB_01a67d56:
    if ((char)unaff_RSI[0x36] == '\0') {
      local_40 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
      FUN_00d50b00();
      plVar15 = plVar5;
    }
    else {
      FUN_01715620();
      pVar11 = 2;
      local_50 = 0x400000002;
      local_58 = (longlong *)&DAT_02636b10;
      local_48 = 7;
      FUN_017163f0(0x400000002,&local_58);
      plVar15 = (longlong *)CONCAT71(local_68._1_7_,(char)local_68);
      if ((((local_60 == '\0') && (plVar15 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_60 != '\0')) && (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
        FUN_00d50b20();
      }
      local_90 = plVar15;
      FUN_00d51d20();
      plVar15 = local_58;
      if (((char)local_50 == '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01715d40();
      local_c0 = plVar15;
      local_b8 = '\0';
      cVar6 = (**(code **)(*plVar5 + 0x50))();
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar14 = local_90;
      if (cVar6 == '\0') {
        local_b0 = local_90;
        local_a8 = '\0';
        uVar9 = (**(code **)(*plVar5 + 0x50))();
        cVar6 = (char)uVar9;
        if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        plVar14 = local_90;
        uVar10 = (undefined7)((ulonglong)uVar9 >> 8);
        if (cVar6 == '\0') {
          if (local_90 == (longlong *)0x0) {
            local_40 = 0;
            plVar1 = (longlong *)0x0;
          }
          else {
            local_40 = CONCAT71(uVar10,1);
            FUN_00d50b00();
            plVar1 = plVar14;
          }
          goto joined_r0x01a682ad;
        }
        if (plVar15 != (longlong *)0x0) {
          local_40 = CONCAT71(uVar10,1);
          FUN_00d50b00();
          goto LAB_01a67fa1;
        }
        plVar15 = (longlong *)0x0;
        local_40 = 0;
      }
      else {
        FUN_01715620();
        pVar11 = 2;
        local_50 = 0x300000002;
        local_58 = (longlong *)&DAT_02636b10;
        local_48 = 6;
        FUN_017163f0(0x300000002,&local_58);
        plVar1 = (longlong *)CONCAT71(local_68._1_7_,(char)local_68);
        if (plVar1 == (longlong *)0x0) {
          local_40 = 0;
        }
        else {
          local_40 = CONCAT71(local_68._1_7_,1);
          if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) &&
             (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
            FUN_00d50b20();
          }
        }
joined_r0x01a682ad:
        bVar3 = plVar15 != (longlong *)0x0;
        plVar15 = plVar1;
        if (bVar3) {
LAB_01a67fa1:
          FUN_00d50b20();
        }
      }
      if (plVar14 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*unaff_RSI + 0xa48))();
    FUN_01a66e80();
    lVar2 = CONCAT71(local_68._1_7_,(char)local_68);
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = local_50 & 0xffffffffffffff00;
    plVar14 = param_2;
    local_58 = plVar5;
    FUN_012502a0(param_2,local_a0,(char)unaff_RSI[0x36]);
    pVar11 = (pthread_key_t)plVar14;
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    FUN_01a66e80();
    lVar2 = CONCAT71(local_68._1_7_,(char)local_68);
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = local_50 & 0xffffffffffffff00;
    local_58 = plVar15;
    FUN_012502a0(local_98,param_2,(char)unaff_RSI[0x36]);
    pVar11 = (pthread_key_t)local_98;
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RSI + 0xa50))();
    if ((char)unaff_RSI[0x40] == '\0') {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (((char)local_40 == '\0') && (plVar15 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      *unaff_RDI = plVar15;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      FUN_01a68710();
      FUN_01a68710();
      FUN_01a66e80();
      lVar2 = CONCAT71(local_68._1_7_,(char)local_68);
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012521f0(param_2,0,0,0);
      plVar5 = local_58;
      puVar12 = &local_50;
      if ((char)local_50 == '\0') {
        puVar12 = (ulonglong *)local_38;
      }
      local_38[0] = (char)local_50;
      *(undefined1 *)puVar12 = 0;
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar15 == plVar5) {
        plVar14 = plVar15;
        if (((char)local_40 == '\0') && (plVar15 != (longlong *)0x0)) {
          cVar6 = '\x01';
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
        else {
          cVar6 = (char)local_40;
          if ((local_38[0] != '\0') && (plVar5 != (longlong *)0x0)) {
            FUN_00d50b20();
            cVar6 = (char)local_40;
          }
        }
      }
      else {
        plVar14 = plVar5;
        if (local_38[0] == '\0') {
          if (plVar5 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          cVar6 = '\x01';
          if (((char)local_40 != '\0') && (plVar15 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          cVar6 = '\x01';
          if (((char)local_40 != '\0') && (plVar15 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((local_60 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      if ((cVar6 != '\0') && (plVar14 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a68317:
  FUN_00d50b20();
  return unaff_RDI;
}


