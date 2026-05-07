// Function: FUN_0190a380
// Address: 0190a380
// Size: 2672 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x0190aa46) */
/* WARNING: Removing unreachable block (ram,0x0190aa4f) */
/* WARNING: Removing unreachable block (ram,0x0190ad7a) */
/* WARNING: Removing unreachable block (ram,0x0190ad83) */
/* WARNING: Removing unreachable block (ram,0x0190adc2) */
/* WARNING: Removing unreachable block (ram,0x0190ada3) */
/* WARNING: Removing unreachable block (ram,0x0190ac59) */
/* WARNING: Removing unreachable block (ram,0x0190ac62) */
/* WARNING: Removing unreachable block (ram,0x0190a777) */
/* WARNING: Removing unreachable block (ram,0x0190a784) */
/* WARNING: Removing unreachable block (ram,0x0190a429) */
/* WARNING: Removing unreachable block (ram,0x0190a432) */
/* WARNING: Removing unreachable block (ram,0x0190a9ed) */
/* WARNING: Removing unreachable block (ram,0x0190a9f6) */
/* WARNING: Removing unreachable block (ram,0x0190ab72) */
/* WARNING: Removing unreachable block (ram,0x0190ab7b) */
/* WARNING: Removing unreachable block (ram,0x0190adb5) */
/* WARNING: Removing unreachable block (ram,0x0190ad91) */
/* WARNING: Removing unreachable block (ram,0x0190abbb) */
/* WARNING: Removing unreachable block (ram,0x0190abc8) */

void FUN_0190a380(double param_1,double param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t in_ECX;
  uint uVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  longlong lVar10;
  longlong unaff_RDI;
  ulonglong uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  longlong local_e0;
  undefined1 local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  longlong local_b8;
  char local_b0;
  undefined8 local_a8;
  double local_a0;
  undefined8 local_98;
  double local_80;
  double local_78;
  longlong local_70;
  char local_68;
  int local_58;
  uint uStack_54;
  longlong local_48;
  char local_40;
  double local_38;
  
  local_a8 = param_3;
  local_80 = param_2;
  local_78 = param_1;
  if (!NAN(param_1)) {
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e78c0();
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
        goto LAB_0190a437;
      }
    }
    else if (local_70 != 0) {
LAB_0190a437:
      pvVar5 = _pthread_getspecific(in_ECX);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_0123f420(local_a8);
      pvVar5 = _pthread_getspecific(in_ECX);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_a0 = (double)FUN_0123f4f0(local_a8);
      FUN_00d50b20();
      local_78 = param_1 - dVar13;
      local_80 = param_2 + dVar13 + local_a0;
    }
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar4 = FUN_012f9aa0();
  uVar1 = *(uint *)(unaff_RDI + 0x30);
  uVar11 = (ulonglong)uVar1;
  if (uVar4 == uVar1) {
    if (NAN(param_1)) {
LAB_0190abd2:
      dVar13 = DAT_023908c8;
      dVar14 = 0.0;
      goto LAB_0190a5b4;
    }
    dVar13 = local_80;
    local_a0 = (double)FUN_00e7b500(local_78);
    local_c0 = dVar13;
    cVar3 = FUN_00e7b6e0(*(undefined8 *)(unaff_RDI + 0x20));
    if (cVar3 != '\0') {
      return;
    }
    bVar2 = false;
  }
  else {
    *(uint *)(unaff_RDI + 0x30) = uVar4;
    dVar13 = local_78;
    dVar14 = local_80;
    if (NAN(param_1)) goto LAB_0190abd2;
LAB_0190a5b4:
    local_a0 = (double)FUN_00e7b500(dVar13);
    bVar2 = true;
    local_c0 = dVar14;
  }
  lVar10 = *(longlong *)(unaff_RDI + 0x18);
  if (lVar10 != 0) {
    local_68 = '\0';
    local_70 = 0;
    local_58 = -1;
    uStack_54 = 0;
    uVar11 = 0;
    uVar7 = uStack_54;
    if (bVar2) {
      while( true ) {
        uStack_54 = uVar7;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if (*(int *)(lVar10 + 0xc) <= local_58) break;
        local_70 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + 8 + lVar6 * 8);
        FUN_01677ae0();
        uVar7 = ~uStack_54;
        if (uVar7 != 0) {
          if ((int)uStack_54 < 0) {
            local_58 = local_58 - uVar7;
            FUN_00d23690(uVar7,uVar7);
            uVar7 = 0;
          }
          else {
            uVar7 = -uVar7;
          }
        }
      }
    }
    else {
      while( true ) {
        if (uStack_54 != 0) {
          if ((int)uStack_54 < 1) {
            uStack_54 = -uStack_54;
          }
          else {
            local_58 = local_58 - uStack_54;
            FUN_00d23690();
            uStack_54 = 0;
          }
        }
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if (*(int *)(lVar10 + 0xc) <= local_58) break;
        lVar9 = *(longlong *)(lVar10 + 0x10);
        local_70 = *(longlong *)(lVar9 + 8 + lVar6 * 8);
        FUN_01677b00();
        pvVar5 = _pthread_getspecific((pthread_key_t)lVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_012754d0(local_78);
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          FUN_01677ae0();
          uStack_54 = ~uStack_54;
        }
        else {
          FUN_01677b30(local_78,local_80,local_a8);
        }
      }
    }
    FUN_0190b2d0();
  }
  pVar8 = (pthread_key_t)lVar10;
  if (NAN(param_1)) goto LAB_0190adea;
  if (NAN(*(double *)(unaff_RDI + 0x20)) || uVar4 != uVar1) {
    local_38 = 0.0;
    local_d0 = (double)FUN_00e7b500(DAT_023908c8);
  }
  else {
    local_38 = *(double *)(unaff_RDI + 0x28);
    local_d0 = (double)FUN_00e7b600(*(double *)(unaff_RDI + 0x20),local_38,local_a0,local_c0);
  }
  lVar10 = local_70;
  if (NAN(local_d0)) {
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e9900(local_78,local_80);
    if (local_70 == 0) {
      local_98 = 0;
      lVar10 = 0;
    }
    else {
      local_98 = CONCAT71((int7)((ulonglong)local_70 >> 8),1);
      if (local_68 == '\0') {
        FUN_00d50b00();
      }
    }
joined_r0x0190ac7b:
    if (lVar10 == 0) goto LAB_0190adea;
  }
  else {
    if (local_d0 <= local_78) {
      local_38 = local_38 + local_d0;
      if (local_80 + local_78 <= local_38) goto LAB_0190adea;
      uVar12 = 0;
LAB_0190a97e:
      local_c8 = local_80 + local_78;
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012ea6f0(local_38,local_c8 - local_38);
      if (local_70 == 0) goto LAB_0190adea;
      local_98 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
      lVar10 = local_70;
      if (local_68 == '\0') {
        FUN_00d50b00();
      }
      goto joined_r0x0190ac7b;
    }
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012ea9e0(local_78,local_d0 - local_78);
    if (local_70 == 0) {
      lVar10 = 0;
      uVar12 = 0;
    }
    else {
      uVar12 = CONCAT71((int7)(uVar11 >> 8),1);
      if (local_68 == '\0') {
        FUN_00d50b00();
      }
    }
    local_38 = local_38 + local_d0;
    local_98 = uVar12;
    if (local_80 + local_78 <= local_38) goto joined_r0x0190ac7b;
    if (lVar10 == 0) goto LAB_0190a97e;
    local_c8 = local_80 + local_78;
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012ea6f0(local_38,local_c8 - local_38);
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_00d23480();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if (0 < *(int *)(lVar10 + 0xc)) {
    if (NAN(local_d0)) {
      lVar6 = 0;
      dVar13 = local_d0;
      do {
        lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar6 * 8);
        local_d8 = 0;
        local_e0 = lVar9;
        dVar13 = (double)FUN_0190a270(dVar13,&local_e0);
        if ((local_40 != '\0') && (local_48 != 0)) {
          dVar13 = (double)FUN_00d50b20();
        }
        if (local_48 == 0) {
          local_b0 = '\0';
          local_b8 = lVar9;
          FUN_016779b0();
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          FUN_01677b30(local_78,local_80,local_a8);
          local_40 = '\0';
          dVar13 = (double)FUN_00d21140();
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(lVar10 + 0xc));
    }
    else {
      lVar6 = 0;
      do {
        local_b8 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar6 * 8);
        local_b0 = '\0';
        FUN_016779b0();
        if ((local_40 == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        FUN_01677b30(local_78,local_80,local_a8);
        local_40 = '\0';
        FUN_00d21140();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(lVar10 + 0xc));
    }
  }
  FUN_001159b0();
  if ((char)local_98 != '\0') {
    FUN_00d50b20();
  }
LAB_0190adea:
  *(double *)(unaff_RDI + 0x20) = local_a0;
  *(double *)(unaff_RDI + 0x28) = local_c0;
  return;
}


