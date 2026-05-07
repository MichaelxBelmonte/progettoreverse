// Function: FUN_00442130
// Address: 00442130
// Size: 3081 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00442b86) */
/* WARNING: Removing unreachable block (ram,0x00442b92) */
/* WARNING: Removing unreachable block (ram,0x00442d3b) */
/* WARNING: Removing unreachable block (ram,0x00442d4b) */
/* WARNING: Removing unreachable block (ram,0x00442525) */
/* WARNING: Removing unreachable block (ram,0x0044252e) */
/* WARNING: Removing unreachable block (ram,0x0044233f) */
/* WARNING: Removing unreachable block (ram,0x004423be) */
/* WARNING: Removing unreachable block (ram,0x004423c3) */
/* WARNING: Removing unreachable block (ram,0x004423cf) */
/* WARNING: Removing unreachable block (ram,0x004423d8) */
/* WARNING: Removing unreachable block (ram,0x00442345) */
/* WARNING: Removing unreachable block (ram,0x00442352) */
/* WARNING: Removing unreachable block (ram,0x00442716) */
/* WARNING: Removing unreachable block (ram,0x00442722) */
/* WARNING: Removing unreachable block (ram,0x0044275c) */
/* WARNING: Removing unreachable block (ram,0x00442768) */
/* WARNING: Removing unreachable block (ram,0x00442820) */
/* WARNING: Removing unreachable block (ram,0x0044282c) */
/* WARNING: Removing unreachable block (ram,0x00442552) */
/* WARNING: Removing unreachable block (ram,0x0044255b) */
/* WARNING: Removing unreachable block (ram,0x00442a8b) */
/* WARNING: Removing unreachable block (ram,0x00442a94) */
/* WARNING: Removing unreachable block (ram,0x00442bcc) */
/* WARNING: Removing unreachable block (ram,0x00442bd8) */
/* WARNING: Removing unreachable block (ram,0x00442626) */
/* WARNING: Removing unreachable block (ram,0x0044262f) */
/* WARNING: Removing unreachable block (ram,0x00442c59) */
/* WARNING: Removing unreachable block (ram,0x00442c62) */
/* WARNING: Removing unreachable block (ram,0x00442a57) */
/* WARNING: Removing unreachable block (ram,0x00442a60) */
/* WARNING: Removing unreachable block (ram,0x0044257d) */
/* WARNING: Removing unreachable block (ram,0x00442586) */
/* WARNING: Removing unreachable block (ram,0x00442809) */
/* WARNING: Removing unreachable block (ram,0x00442812) */
/* WARNING: Removing unreachable block (ram,0x00442238) */
/* WARNING: Removing unreachable block (ram,0x00442241) */
/* WARNING: Removing unreachable block (ram,0x004424dc) */
/* WARNING: Removing unreachable block (ram,0x004424e5) */
/* WARNING: Removing unreachable block (ram,0x00442c2f) */
/* WARNING: Removing unreachable block (ram,0x00442c3c) */
/* WARNING: Removing unreachable block (ram,0x00442abe) */
/* WARNING: Removing unreachable block (ram,0x00442acb) */
/* WARNING: Removing unreachable block (ram,0x0044225f) */
/* WARNING: Removing unreachable block (ram,0x00442268) */
/* WARNING: Removing unreachable block (ram,0x004427b7) */
/* WARNING: Removing unreachable block (ram,0x004427c0) */
/* WARNING: Removing unreachable block (ram,0x0044299f) */
/* WARNING: Removing unreachable block (ram,0x004429c0) */
/* WARNING: Removing unreachable block (ram,0x004429a1) */
/* WARNING: Removing unreachable block (ram,0x004429c2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00442130(pthread_key_t param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong unaff_RDI;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  double dVar11;
  longlong local_c8;
  char local_c0;
  longlong *local_78;
  char local_70;
  longlong local_68;
  longlong local_60;
  char local_58;
  int local_48;
  longlong local_38;
  
  lVar9 = local_60;
  if (*(longlong *)(unaff_RDI + 0x20) != 0) {
    return;
  }
  FUN_006f3f00();
  cVar2 = FUN_0078cda0();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  iVar4 = FUN_00228b30();
  if (iVar4 != 0) {
    if (iVar4 != 1) {
      return;
    }
    if (cVar2 == '\0') {
      FUN_00226f20();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
          goto LAB_0044226d;
        }
        goto LAB_004421a3;
      }
      if (local_60 == 0) goto LAB_004421a3;
LAB_0044226d:
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01657380();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01650330();
      if (local_70 == '\0') {
        if (local_78 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      FUN_000ba510();
      if (local_60 == 0) {
        bVar1 = false;
        lVar9 = 0;
      }
      else if (local_58 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
      }
      else {
        local_58 = '\0';
        bVar1 = true;
      }
      if (local_78 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
LAB_004421a3:
      lVar9 = 0;
      bVar1 = false;
    }
    FUN_006f4810();
    (**(code **)(*local_78 + 0x9a0))();
    FUN_01dd3c60();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0xde8))();
      FUN_006f4810();
      FUN_002ea230();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x5d8))();
    if (local_58 == '\0') {
      if (local_60 == 0) goto LAB_004427d5;
      FUN_00d50b00();
    }
    else if (local_60 == 0) goto LAB_004427d5;
    FUN_0063a4a0();
    FUN_00d50b20();
LAB_004427d5:
    if (!bVar1) {
      return;
    }
    if (lVar9 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0xe10))();
  lVar8 = local_60;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
      goto LAB_004421ca;
    }
    if (cVar2 == '\0') goto LAB_00442324;
LAB_004421ce:
    bVar1 = false;
LAB_0044291a:
    local_68 = 0;
    bVar10 = true;
  }
  else {
LAB_004421ca:
    if (cVar2 != '\0') goto LAB_004421ce;
    if ((local_60 == 0) || (*(int *)(local_60 + 0xc) == 0)) {
LAB_00442324:
      (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0x9e0))();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60 == 0) || (*(int *)(local_60 + 0xc) == 0)) {
      local_68 = 0;
      bVar1 = false;
LAB_0044245f:
      local_78 = DAT_026f6de0;
      local_38 = local_60;
      if (DAT_026f6de0 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      dVar11 = (double)FUN_00e7d6f0();
      uVar6 = (ulonglong)(dVar11 * DAT_023907c0);
      dVar11 = dVar11 * DAT_023907c0 - _DAT_023907c8;
      FUN_0071a120();
      if ((local_58 == '\0') && (local_60 != 0)) {
        FUN_00d50b00();
      }
      bVar3 = (byte)(((longlong)dVar11 & (longlong)uVar6 >> 0x3f | uVar6) / 3);
      local_70 = '\0';
      FUN_000175c0();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      if (local_60 != 0) {
        local_58 = '\0';
        bVar3 = FUN_00c70bc0();
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (local_78 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      lVar8 = local_38;
      if ((local_60 != 0 & bVar3) == 0) {
        (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0x9d0))();
        if (local_60 == local_38) {
LAB_00442868:
          lVar8 = local_38;
          if ((local_58 != '\0') && (lVar8 = local_38, local_60 != 0)) {
            FUN_00d50b20();
            lVar8 = local_38;
          }
        }
        else {
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
            bVar10 = local_38 != 0;
            local_38 = local_60;
            if (bVar10) {
              FUN_00d50b20();
            }
            goto LAB_00442868;
          }
          lVar8 = local_60;
          if (local_38 != 0) {
            FUN_00d50b20();
          }
        }
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else if (*(int *)(lVar8 + 0xc) != 0) {
          FUN_012e74e0();
          if (local_60 == local_68) {
            if ((!bVar1) && (local_60 != 0)) {
              lVar7 = local_68;
              if (local_58 != '\0') goto LAB_00442cc4;
              bVar1 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (local_58 != '\0') {
              lVar7 = local_60;
              if ((bVar1) && (local_68 != 0)) {
                FUN_00d50b20();
              }
LAB_00442cc4:
              local_58 = '\0';
              bVar1 = true;
              local_68 = lVar7;
              goto LAB_004428f2;
            }
            if (local_60 != 0) {
              FUN_00d50b00();
            }
            if ((bVar1) && (local_68 != 0)) {
              local_68 = local_60;
              FUN_00d50b20();
              bVar1 = true;
            }
            else {
              local_68 = local_60;
              bVar1 = true;
            }
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    else {
      FUN_012e74e0();
      local_68 = local_60;
      if (local_60 == 0) {
        local_68 = 0;
        bVar1 = false;
      }
      else if (local_58 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
      }
      else {
        local_58 = '\0';
        bVar1 = true;
      }
      if (*(int *)(local_60 + 0xc) == 0) goto LAB_0044245f;
    }
LAB_004428f2:
    if (local_68 == 0) goto LAB_0044291a;
    bVar10 = false;
  }
  FUN_00323290();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if (!bVar10) {
    local_58 = '\0';
    local_60 = 0;
    local_48 = -1;
LAB_0044299b:
    while( true ) {
      lVar7 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(local_68 + 0xc) <= local_48) break;
      local_60 = *(longlong *)(*(longlong *)(local_68 + 0x10) + 8 + lVar7 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_68 + 0x10));
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f4d60();
      if (local_70 == '\0') goto LAB_00442a40;
      if (local_78 != (longlong *)0x0) goto LAB_00442a70;
    }
    FUN_000be170();
  }
  FUN_006f4810();
  (**(code **)(*local_78 + 0x9a0))();
  FUN_01dd3c60();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((!bVar10) && (*(int *)(local_68 + 0xc) != 0)) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0xde8))();
    FUN_006f4810();
    FUN_002ea230();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x5d8))();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_00442c77;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_00442c77;
  FUN_0063a4a0();
  FUN_00d50b20();
LAB_00442c77:
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (bVar1 && !bVar10) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  return;
LAB_00442a40:
  if (local_78 != (longlong *)0x0) {
    FUN_00d50b00();
LAB_00442a70:
    cVar2 = FUN_00d24090();
    if (cVar2 == '\0') {
      FUN_00d21140();
    }
    local_70 = '\0';
    FUN_00d50b20();
  }
  goto LAB_0044299b;
}


