// Function: FUN_0092620f
// Address: 0092620f
// Size: 2180 bytes
// Class: Unknown


ulonglong FUN_0092620f(longlong *param_1,int *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  char *pcVar12;
  uint *puVar13;
  longlong *plVar14;
  undefined8 unaff_RBX;
  undefined7 uVar16;
  ulonglong uVar15;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar17;
  int local_74;
  undefined *local_70;
  byte *local_68;
  byte *local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte *local_50;
  byte *local_48;
  char *local_40;
  uint local_34;
  
  *param_2 = -1;
  pcVar12 = (char *)*unaff_RDI;
  local_60 = param_3 + (*unaff_RSI - (longlong)pcVar12);
  if ((char *)*unaff_RSI <= pcVar12) {
    if ((param_4 & 1) != 0) {
      local_70 = &DAT_025233b0;
      local_68 = param_3;
      FUN_00926c23();
      goto LAB_00926a64;
    }
LAB_00926290:
    uVar15 = 0;
    goto LAB_009269f2;
  }
  cVar5 = *pcVar12;
  uVar16 = (undefined7)((ulonglong)unaff_RBX >> 8);
  local_50 = local_60;
  local_48 = param_3;
  local_40 = pcVar12;
  local_34 = param_4;
  uVar9 = (**(code **)(*param_1 + 0x38))();
  pcVar12 = (char *)*unaff_RDI;
  if (cVar5 == (char)uVar9) {
    pcVar12 = pcVar12 + 1;
    *unaff_RDI = (longlong)pcVar12;
    if ((char *)*unaff_RSI <= pcVar12) {
      if ((local_34 & 1) != 0) {
        local_68 = (byte *)(pcVar12 + ((longlong)local_48 - (longlong)local_40));
        local_70 = &DAT_025233b0;
        local_60 = local_50;
        FUN_00926c23();
        goto LAB_00926a64;
      }
      goto LAB_00926290;
    }
    local_58 = (undefined4)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
  }
  else {
    local_58 = 0;
  }
  cVar5 = *pcVar12;
  cVar4 = (**(code **)(*param_1 + 0x38))();
  local_68 = (byte *)*unaff_RDI;
  if (((cVar5 == cVar4) || ((char)*local_68 < '\0')) ||
     ((*(byte *)(param_1[2] + 1 + (ulonglong)*local_68 * 4) & 4) == 0)) {
LAB_009262cc:
    if (local_68 != (byte *)*unaff_RSI) {
      uVar16 = 0x926a;
      do {
        cVar5 = (**(code **)(*param_1 + 0x48))(local_68,0);
        iVar7 = (int)cVar5;
        if (iVar7 < 0x27) {
          if (iVar7 == 0x20) {
            *(byte *)(param_2 + 0x1c) = *(byte *)(param_2 + 0x1c) | 2;
          }
          else {
            if (iVar7 != 0x23) goto switchD_00926302_caseD_28;
            *(byte *)((longlong)param_2 + 0x4d) = *(byte *)((longlong)param_2 + 0x4d) | 6;
          }
        }
        else {
          switch(iVar7) {
          case 0x27:
            break;
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2c:
          case 0x2e:
          case 0x2f:
switchD_00926302_caseD_28:
            cVar5 = *(char *)*unaff_RDI;
            uVar16 = 0x926a;
            cVar4 = (**(code **)(*param_1 + 0x38))();
            local_68 = (byte *)*unaff_RDI;
            if (cVar5 == cVar4) {
              local_68 = local_68 + 1;
            }
            else {
              if (((local_68 == (byte *)*unaff_RSI) || ((char)*local_68 < '\0')) ||
                 ((*(byte *)(param_1[2] + 1 + (ulonglong)*local_68 * 4) & 4) == 0))
              goto LAB_0092656a;
              local_68 = (byte *)FUN_0092700b(param_1,param_2 + 0xe);
            }
            *unaff_RDI = (longlong)local_68;
            goto LAB_0092656a;
          case 0x2b:
            *(byte *)((longlong)param_2 + 0x4d) = *(byte *)((longlong)param_2 + 0x4d) | 8;
            break;
          case 0x2d:
            *(byte *)(param_2 + 0x13) = *(byte *)(param_2 + 0x13) | 0x20;
            break;
          case 0x30:
            *(byte *)(param_2 + 0x1c) = *(byte *)(param_2 + 0x1c) | 1;
            break;
          default:
            if (iVar7 == 0x3d) {
              *(byte *)(param_2 + 0x1c) = *(byte *)(param_2 + 0x1c) | 4;
            }
            else {
              if (iVar7 != 0x5f) goto switchD_00926302_caseD_28;
              *(byte *)(param_2 + 0x13) = *(byte *)(param_2 + 0x13) | 0x10;
            }
          }
        }
        local_68 = (byte *)(*unaff_RDI + 1);
        *unaff_RDI = (longlong)local_68;
      } while (local_68 != (byte *)*unaff_RSI);
    }
    uVar15 = CONCAT71(uVar16,1);
    if ((local_34 & 1) == 0) goto LAB_009269f2;
    local_68 = local_68 + ((longlong)local_48 - (longlong)local_40);
    local_70 = &DAT_025233b0;
    local_60 = local_50;
    FUN_00926c23();
    goto LAB_00926a64;
  }
  pcVar12 = (char *)FUN_00958e30(param_1,&local_74);
  *unaff_RDI = (longlong)pcVar12;
  if ((char *)*unaff_RSI <= pcVar12) {
    if ((local_34 & 1) != 0) {
      local_68 = (byte *)(pcVar12 + ((longlong)local_48 - (longlong)local_40));
      local_70 = &DAT_025233b0;
      local_60 = local_50;
      FUN_00926c23();
      goto LAB_00926a64;
    }
    goto LAB_00926290;
  }
  cVar5 = *pcVar12;
  cVar4 = (**(code **)(*param_1 + 0x38))();
  if (cVar5 == cVar4) {
    *param_2 = local_74 + -1;
    lVar2 = *unaff_RDI;
    *unaff_RDI = lVar2 + 1;
    uVar15 = CONCAT71(uVar16,1);
    if (((local_34 & 1) != 0) && ((char)local_58 == '\x01')) {
      local_68 = local_48 + ((lVar2 + 1) - (longlong)local_40);
      local_70 = &DAT_025233b0;
      local_60 = local_50;
      FUN_00926c23();
      goto LAB_00926a64;
    }
    goto LAB_009269f2;
  }
  cVar5 = *(char *)*unaff_RDI;
  cVar4 = (**(code **)(*param_1 + 0x38))();
  if (cVar5 == cVar4) {
    *param_2 = local_74 + -1;
    local_68 = (byte *)(*unaff_RDI + 1);
    *unaff_RDI = (longlong)local_68;
    goto LAB_009262cc;
  }
  *(longlong *)(param_2 + 0xe) = (longlong)local_74;
  *param_2 = -1;
  local_68 = (byte *)*unaff_RDI;
LAB_0092656a:
  if ((byte *)*unaff_RSI <= local_68) {
    uVar15 = CONCAT71(uVar16,1);
    if ((local_34 & 1) == 0) goto LAB_009269f2;
    local_68 = local_68 + ((longlong)local_48 - (longlong)local_40);
    local_70 = &DAT_025233b0;
    local_60 = local_50;
    FUN_00926c23();
    goto LAB_00926a64;
  }
  bVar1 = *local_68;
  uVar8 = (**(code **)(*param_1 + 0x38))();
  puVar13 = (uint *)(ulonglong)uVar8;
  pbVar10 = (byte *)*unaff_RDI;
  if (bVar1 == (byte)uVar8) {
    pbVar10 = pbVar10 + 1;
    *unaff_RDI = (longlong)pbVar10;
    if (pbVar10 == (byte *)*unaff_RSI) {
LAB_00926621:
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      goto LAB_00926629;
    }
    bVar1 = *pbVar10;
    uVar8 = (**(code **)(*param_1 + 0x38))();
    puVar13 = (uint *)(ulonglong)uVar8;
    pbVar10 = (byte *)*unaff_RDI;
    if (bVar1 == (byte)uVar8) {
      pbVar10 = pbVar10 + 1;
      *unaff_RDI = (longlong)pbVar10;
      goto LAB_00926629;
    }
    if (((pbVar10 == (byte *)*unaff_RSI) ||
        (puVar13 = (uint *)(ulonglong)*pbVar10, (char)*pbVar10 < '\0')) ||
       ((*(byte *)(param_1[2] + 1 + (longlong)puVar13 * 4) & 4) == 0)) goto LAB_00926621;
    plVar14 = param_1;
    pbVar10 = (byte *)FUN_0092700b(param_1,param_2 + 0x10);
    *unaff_RDI = (longlong)pbVar10;
    puVar13 = (uint *)CONCAT71((int7)((ulonglong)plVar14 >> 8),1);
    local_54 = SUB84(puVar13,0);
  }
  else {
LAB_00926629:
    local_54 = 0;
  }
  if (pbVar10 == (byte *)*unaff_RSI) {
LAB_009266db:
    cVar5 = '\0';
  }
  else {
    cVar5 = '\0';
    do {
      cVar4 = (**(code **)(*param_1 + 0x48))(puVar13,0);
      uVar8 = (int)cVar4 - 0x49;
      puVar13 = (uint *)(ulonglong)uVar8;
      if (uVar8 < 0x32) {
        if ((0x2400a80000008U >> ((ulonglong)puVar13 & 0x3f) & 1) == 0) {
          if (puVar13 != (uint *)0x0) goto code_r0x00926676;
          cVar5 = 'I';
        }
        goto LAB_009266b4;
      }
code_r0x00926676:
      puVar13 = &switchD_00926684::switchdataD_00926aec;
      switch((int)cVar4) {
      case 0x32:
        if (cVar5 == '3') goto LAB_009266a5;
        uVar15 = 1;
        if ((local_34 & 1) == 0) goto LAB_009269f2;
        local_68 = local_48 + (*unaff_RDI - (longlong)local_40);
        local_70 = &DAT_025233b0;
        local_60 = local_50;
        FUN_00926c23();
        goto LAB_00926a64;
      case 0x33:
        bVar17 = cVar5 != 'I';
        cVar5 = '3';
        if (bVar17) {
          uVar15 = 1;
          if ((local_34 & 1) == 0) goto LAB_009269f2;
          local_68 = local_48 + (*unaff_RDI - (longlong)local_40);
          local_70 = &DAT_025233b0;
          local_60 = local_50;
          FUN_00926c23();
          goto LAB_00926a64;
        }
        break;
      case 0x34:
        if (cVar5 != '6') {
          uVar15 = 1;
          if ((local_34 & 1) == 0) goto LAB_009269f2;
          local_68 = local_48 + (*unaff_RDI - (longlong)local_40);
          local_70 = &DAT_025233b0;
          local_60 = local_50;
          FUN_00926c23();
          goto LAB_00926a64;
        }
LAB_009266a5:
        cVar5 = '\0';
        break;
      default:
        if (cVar5 == '\0') goto LAB_009266db;
        bVar17 = cVar5 != 'I';
        cVar5 = '\0';
        if (bVar17) goto LAB_00926717;
        goto LAB_009266dd;
      case 0x36:
        bVar17 = cVar5 != 'I';
        cVar5 = '6';
        if (bVar17) {
          uVar15 = 1;
          if ((local_34 & 1) == 0) goto LAB_009269f2;
          local_68 = local_48 + (*unaff_RDI - (longlong)local_40);
          local_70 = &DAT_025233b0;
          local_60 = local_50;
          FUN_00926c23();
          goto LAB_00926a64;
        }
      }
LAB_009266b4:
      lVar2 = *unaff_RDI;
      *unaff_RDI = lVar2 + 1;
    } while (lVar2 + 1 != *unaff_RSI);
  }
LAB_009266dd:
  if ((cVar5 != '\0') || (pcVar12 = (char *)*unaff_RDI, (char *)*unaff_RSI <= pcVar12)) {
LAB_00926717:
    uVar15 = 1;
    if ((local_34 & 1) == 0) goto LAB_009269f2;
    local_68 = local_48 + (*unaff_RDI - (longlong)local_40);
    local_70 = &DAT_025233b0;
    local_60 = local_50;
    FUN_00926c23();
    goto LAB_00926a64;
  }
  if ((char)local_58 != '\0') {
    cVar5 = *pcVar12;
    cVar4 = (**(code **)(*param_1 + 0x38))();
    pcVar12 = (char *)*unaff_RDI;
    if (cVar5 == cVar4) {
      *unaff_RDI = (longlong)(pcVar12 + 1);
      uVar15 = 1;
      goto LAB_009269f2;
    }
  }
  uVar6 = (**(code **)(*param_1 + 0x48))(pcVar12,0);
  switch(uVar6) {
  case 0x41:
    uVar8 = param_2[0x13] | 0x4000;
    param_2[0x13] = uVar8;
    goto LAB_00926995;
  default:
    if ((local_34 & 1) != 0) {
      local_68 = local_48 + (*unaff_RDI - (longlong)local_40);
      local_70 = &DAT_025233b0;
      local_60 = local_50;
      FUN_00926c23();
      goto LAB_00926a64;
    }
    break;
  case 0x43:
  case 99:
    param_2[0x1a] = 1;
    param_2[0x1b] = 0;
    break;
  case 0x45:
    uVar8 = param_2[0x13] | 0x4000;
    param_2[0x13] = uVar8;
    goto LAB_009269ae;
  case 0x46:
    uVar8 = param_2[0x13] | 0x4000;
    param_2[0x13] = uVar8;
    goto LAB_00926956;
  case 0x47:
    *(byte *)((longlong)param_2 + 0x4d) = *(byte *)((longlong)param_2 + 0x4d) | 0x40;
    break;
  case 0x53:
  case 0x73:
    if ((char)local_54 != '\0') {
      *(undefined8 *)(param_2 + 0x1a) = *(undefined8 *)(param_2 + 0x10);
    }
    param_2[0x10] = 6;
    param_2[0x11] = 0;
    break;
  case 0x54:
    puVar11 = (undefined1 *)(*unaff_RDI + 1);
    *unaff_RDI = (longlong)puVar11;
    if ((undefined1 *)*unaff_RSI <= puVar11) {
      if ((local_34 & 1) != 0) {
        local_68 = puVar11 + ((longlong)local_48 - (longlong)local_40);
        local_70 = &DAT_025233b0;
        local_60 = local_50;
        FUN_00926c23();
        goto LAB_00926a64;
      }
      goto LAB_00926290;
    }
    uVar6 = *puVar11;
    goto LAB_009268ee;
  case 0x58:
    *(byte *)((longlong)param_2 + 0x4d) = *(byte *)((longlong)param_2 + 0x4d) | 0x40;
  case 0x70:
  case 0x78:
    uVar8 = param_2[0x13] & 0xffffffb5U | 8;
    goto LAB_009269b3;
  case 0x61:
    uVar8 = param_2[0x13];
LAB_00926995:
    uVar8 = uVar8 & 0xfffffeb1 | 0x104;
LAB_009269b3:
    param_2[0x13] = uVar8;
    break;
  case 0x62:
    *(byte *)(param_2 + 0x13) = *(byte *)(param_2 + 0x13) | 1;
    break;
  case 100:
  case 0x67:
  case 0x69:
  case 0x75:
    break;
  case 0x65:
    uVar8 = param_2[0x13];
LAB_009269ae:
    uVar8 = uVar8 | 0x100;
    goto LAB_009269b3;
  case 0x66:
    uVar8 = param_2[0x13];
LAB_00926956:
    uVar8 = uVar8 | 4;
    goto LAB_009269b3;
  case 0x6e:
    *param_2 = -3;
    break;
  case 0x6f:
    uVar8 = param_2[0x13] & 0xffffffb5U | 0x40;
    goto LAB_009269b3;
  case 0x74:
    uVar6 = (**(code **)(*param_1 + 0x38))();
LAB_009268ee:
    *(undefined1 *)(param_2 + 0x12) = uVar6;
    *(byte *)(param_2 + 0x1c) = *(byte *)(param_2 + 0x1c) | 8;
    *param_2 = -2;
  }
  pcVar12 = (char *)(*unaff_RDI + 1);
  *unaff_RDI = (longlong)pcVar12;
  uVar15 = 1;
  if ((char)local_58 != '\0') {
    if ((pcVar12 == (char *)*unaff_RSI) ||
       (cVar5 = *pcVar12, cVar4 = (**(code **)(*param_1 + 0x38))(), cVar5 != cVar4)) {
      if ((local_34 & 1) != 0) {
        local_68 = local_48 + (*unaff_RDI - (longlong)local_40);
        local_70 = &DAT_025233b0;
        local_60 = local_50;
        FUN_00926c23();
LAB_00926a64:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    else {
      *unaff_RDI = *unaff_RDI + 1;
    }
  }
LAB_009269f2:
  return uVar15 & 0xffffffff;
}


