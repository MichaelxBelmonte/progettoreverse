// Function: FUN_017439c0
// Address: 017439c0
// Size: 1886 bytes
// Class: Unknown
// String references:
//   "%@%c"


/* WARNING: Removing unreachable block (ram,0x01743f97) */
/* WARNING: Removing unreachable block (ram,0x01744033) */
/* WARNING: Removing unreachable block (ram,0x01743fe0) */
/* WARNING: Removing unreachable block (ram,0x01744149) */
/* WARNING: Removing unreachable block (ram,0x01744155) */
/* WARNING: Removing unreachable block (ram,0x01743a8c) */
/* WARNING: Removing unreachable block (ram,0x01743a95) */
/* WARNING: Removing unreachable block (ram,0x01743a21) */
/* WARNING: Removing unreachable block (ram,0x01743a2a) */
/* WARNING: Removing unreachable block (ram,0x01743d93) */
/* WARNING: Removing unreachable block (ram,0x01743d9c) */
/* WARNING: Removing unreachable block (ram,0x01743bb3) */
/* WARNING: Removing unreachable block (ram,0x01743bbc) */

undefined8 * FUN_017439c0(undefined8 param_1,undefined8 param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar8;
  int iVar9;
  longlong local_a8;
  char local_a0;
  int local_98;
  int local_94;
  undefined8 local_90;
  longlong local_80;
  char local_78;
  longlong local_68;
  char local_60;
  
  local_90 = param_2;
  FUN_01740240();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_01743a2f;
    }
LAB_01743a9c:
    lVar8 = 0;
    bVar2 = false;
  }
  else {
    if (local_68 == 0) goto LAB_01743a9c;
LAB_01743a2f:
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017394e0();
    if (local_68 == 0) {
      lVar8 = 0;
      bVar2 = false;
    }
    else {
      bVar2 = true;
      lVar8 = local_68;
      if (local_60 == '\0') {
        FUN_00d50b00();
      }
    }
    FUN_00d50b20();
  }
  local_98 = (**(code **)(*unaff_RSI + 0x370))();
  if (lVar8 != 0) {
    iVar4 = FUN_00d8c7a0();
    bVar1 = false;
    if ((iVar4 == 0) && (param_3 != '\0')) {
LAB_01743af8:
      iVar4 = (**(code **)(*unaff_RSI + 0x408))();
      iVar4 = (iVar4 >> 0x1f) * -2 + -1;
      iVar9 = 0;
      do {
        if (lVar8 == 0) {
          if (0xfe < iVar9 + 0x7fU) goto LAB_01743ce2;
        }
        else {
          iVar5 = FUN_00d8c7a0();
          if (((iVar5 != 0) || (0x7f < iVar9)) || (iVar9 < -0x7f)) goto LAB_01743ccd;
        }
        FUN_01740240();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
            goto LAB_01743bd0;
          }
        }
        else if (local_68 != 0) {
LAB_01743bd0:
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017394e0();
          if (local_68 == lVar8) {
            lVar7 = lVar8;
            bVar1 = bVar2;
            if ((!bVar2) && (local_68 != 0)) {
              bVar1 = true;
              if (local_60 != '\0') goto LAB_01743b20;
              bVar1 = true;
              FUN_00d50b00();
            }
LAB_01743cac:
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            lVar7 = local_68;
            if (local_60 == '\0') {
              if (local_68 != 0) {
                FUN_00d50b00();
              }
              bVar1 = true;
              if ((bVar2) && (lVar8 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_01743cac;
            }
            bVar1 = true;
            if ((bVar2) && (lVar8 != 0)) {
              FUN_00d50b20();
            }
          }
LAB_01743b20:
          FUN_00d50b20();
          lVar8 = lVar7;
          bVar2 = bVar1;
        }
        iVar9 = iVar9 + iVar4;
      } while( true );
    }
    goto LAB_017440cb;
  }
  if (param_3 != '\0') goto LAB_01743af8;
LAB_01744057:
  lVar8 = DAT_026e3bc8;
  if (DAT_026e3bc8 != 0) {
    FUN_00d50b00();
  }
  cVar3 = FUN_00d90eb0();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  bVar1 = true;
  lVar8 = 0;
  goto LAB_017440cb;
LAB_01743ead:
  iVar5 = FUN_00d8c7a0();
  iVar4 = local_94;
  if (iVar5 != 0) goto LAB_01743ec4;
  goto LAB_01744053;
LAB_01743ccd:
  iVar5 = FUN_00d8c7a0();
  if (iVar5 == 0) {
LAB_01743ce2:
    local_94 = -iVar4;
    iVar9 = 0;
    do {
      if (lVar8 == 0) {
        if (0xfe < iVar9 + 0x7fU) goto LAB_01744057;
      }
      else {
        iVar5 = FUN_00d8c7a0();
        if (((iVar5 != 0) || (0x7f < iVar9)) || (iVar9 < -0x7f)) goto LAB_01743ead;
      }
      FUN_01740240();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
          goto LAB_01743db0;
        }
      }
      else if (local_68 != 0) {
LAB_01743db0:
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017394e0();
        if (local_68 == lVar8) {
          lVar7 = lVar8;
          bVar1 = bVar2;
          if ((!bVar2) && (local_68 != 0)) {
            bVar1 = true;
            if (local_60 != '\0') goto LAB_01743d00;
            bVar1 = true;
            FUN_00d50b00();
          }
LAB_01743e8c:
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar7 = local_68;
          if (local_60 == '\0') {
            if (local_68 != 0) {
              FUN_00d50b00();
            }
            bVar1 = true;
            if ((bVar2) && (lVar8 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01743e8c;
          }
          bVar1 = true;
          if ((bVar2) && (lVar8 != 0)) {
            FUN_00d50b20();
          }
        }
LAB_01743d00:
        FUN_00d50b20();
        lVar8 = lVar7;
        bVar2 = bVar1;
      }
      iVar9 = iVar9 - iVar4;
    } while( true );
  }
LAB_01743ec4:
  if (iVar9 != iVar4) {
    iVar9 = iVar4 - iVar9;
    lVar7 = lVar8;
    bVar1 = bVar2;
    do {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40();
      if (local_80 == lVar7) {
        lVar8 = lVar7;
        bVar2 = bVar1;
        if ((!bVar1) && (local_80 != 0)) {
          if (local_78 == '\0') {
            FUN_00d50b00();
            goto LAB_01743ff0;
          }
          goto LAB_01743f83;
        }
joined_r0x01743fd4:
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar8 = local_80;
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
          bVar2 = true;
          if ((bVar1) && (lVar7 != 0)) {
            FUN_00d50b20();
LAB_01743ff0:
            bVar2 = true;
            goto joined_r0x01743fd4;
          }
        }
        else {
          if ((bVar1) && (lVar7 != 0)) {
            FUN_00d50b20();
          }
LAB_01743f83:
          local_78 = '\0';
          bVar2 = true;
        }
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      iVar9 = iVar9 + iVar4;
      lVar7 = lVar8;
      bVar1 = bVar2;
    } while (iVar9 != 0);
    if (lVar8 == 0) goto LAB_01744057;
  }
LAB_01744053:
  bVar1 = false;
LAB_017440cb:
  local_a0 = '\0';
  local_a8 = lVar8;
  FUN_01521770(local_98 / 0xc + -1,&local_a8);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (bVar2 && !bVar1) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


