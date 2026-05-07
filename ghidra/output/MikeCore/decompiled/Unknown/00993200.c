// Function: FUN_00993200
// Address: 00993200
// Size: 1378 bytes
// Class: Unknown


longlong * FUN_00993200(locale *param_1)

{
  byte *pbVar1;
  uint uVar2;
  code *pcVar3;
  byte *pbVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  locale *this;
  byte *pbVar14;
  longlong lVar15;
  byte *unaff_RSI;
  longlong *unaff_RDI;
  int iVar16;
  longlong lVar17;
  byte *local_e0;
  uint local_b4;
  byte *local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  char local_58;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  FUN_009540a0();
  plVar9 = (longlong *)std::locale::use_facet((id *)param_1);
  std::locale::~locale(param_1);
  (**(code **)(*plVar9 + 0x38))();
  cVar7 = (char)unaff_RDI[0xb];
  FUN_009260ab();
  FUN_00958ae0();
  uVar11 = 0;
  lVar10 = std::string::find(cVar7,0);
  if (lVar10 == -1) {
    local_b4 = 0xffffffff;
    bVar5 = true;
    bVar8 = false;
  }
  else {
    pbVar1 = unaff_RSI + 1;
    uVar11 = 0;
    local_b4 = 0xffffffff;
    bVar5 = true;
    iVar16 = 0;
    bVar8 = false;
    lVar15 = 0;
    do {
      bVar6 = *unaff_RSI;
      pbVar12 = *(byte **)(unaff_RSI + 0x10);
      local_e0 = unaff_RSI + lVar10 + 2;
      pbVar14 = pbVar12;
      pbVar4 = pbVar12 + lVar10 + 1;
      if ((bVar6 & 1) == 0) {
        pbVar14 = pbVar1;
        pbVar4 = local_e0;
      }
      lVar17 = lVar10 + 1;
      if (*pbVar4 == pbVar14[lVar10]) {
        pbVar12 = pbVar12 + lVar15;
        FUN_00926e60(pbVar12,pbVar14 + lVar17);
        cVar7 = (char)pbVar12;
        lVar17 = lVar10 + 2;
        lVar15 = lVar17;
      }
      else {
        if (lVar10 != lVar15) {
          FUN_00926e60(pbVar12 + lVar15,pbVar14 + lVar10);
          bVar6 = *unaff_RSI;
        }
        if ((bVar6 & 1) == 0) {
          uVar13 = (ulonglong)(bVar6 >> 1);
          local_b0 = pbVar1;
        }
        else {
          local_b0 = *(byte **)(unaff_RSI + 0x10);
          local_e0 = local_b0 + lVar17;
          uVar13 = *(ulonglong *)(unaff_RSI + 8);
        }
        local_b0 = local_b0 + uVar13;
        cVar7 = FUN_0092620f(plVar9,*unaff_RDI + (longlong)iVar16 * 0x78,lVar17,(char)unaff_RDI[0xb]
                            );
        pbVar12 = pbVar1;
        if ((*unaff_RSI & 1) != 0) {
          pbVar12 = *(byte **)(unaff_RSI + 0x10);
        }
        lVar17 = (longlong)local_e0 - (longlong)pbVar12;
        lVar15 = lVar10;
        if (cVar7 != '\0') {
          FUN_00926be0();
          cVar7 = (char)pbVar12;
          uVar2 = *(uint *)(*unaff_RDI + (longlong)iVar16 * 0x78);
          lVar15 = lVar17;
          if (uVar2 != 0xfffffffd) {
            if (uVar2 == 0xffffffff) {
              bVar5 = false;
            }
            else if (uVar2 == 0xfffffffe) {
              bVar8 = true;
            }
            else {
              if ((int)local_b4 <= (int)uVar2) {
                local_b4 = uVar2;
              }
              cVar7 = (char)local_b4;
            }
            uVar11 = uVar11 + 1;
            iVar16 = iVar16 + 1;
            goto LAB_009934f2;
          }
        }
        cVar7 = (char)pbVar12;
      }
LAB_009934f2:
      lVar10 = std::string::find(cVar7,(ulong)lVar17);
    } while (lVar10 != -1);
  }
  FUN_00926e60();
  if (!bVar5) {
    if ((-1 < (int)local_b4) && ((*(byte *)(unaff_RDI + 0xb) & 1) != 0)) {
      local_a8 = (ulonglong)local_b4;
      local_b0 = &DAT_025233b0;
      local_a0 = 0;
      FUN_00926c23();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((int)uVar11 < 1) {
      iVar16 = 0;
    }
    else {
      lVar10 = *unaff_RDI;
      lVar15 = 0;
      iVar16 = 0;
      do {
        if (*(int *)(lVar10 + lVar15) == -1) {
          *(int *)(lVar10 + lVar15) = iVar16;
          iVar16 = iVar16 + 1;
        }
        lVar15 = lVar15 + 0x78;
      } while ((ulonglong)uVar11 * 0x78 - lVar15 != 0);
    }
    local_b4 = iVar16 - 1;
  }
  local_68 = (**(code **)(*plVar9 + 0x38))();
  local_b0 = (byte *)CONCAT44(local_b0._4_4_,0xffffffff);
  local_58 = '\0';
  this = (locale *)0x0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 6;
  local_64 = 0x1002;
  local_5c = 0;
  local_48 = 0x7fffffffffffffff;
  local_40 = 0;
  FUN_00926c7a(0,&local_b0);
  if (local_58 != '\0') {
    std::locale::~locale(this);
    local_58 = '\0';
  }
  if ((local_90 & 1) != 0) {
    operator_delete(this);
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(this);
  }
  uVar11 = *(uint *)(unaff_RDI + 6);
  if (bVar8) {
    uVar11 = uVar11 | 4;
    *(uint *)(unaff_RDI + 6) = uVar11;
  }
  *(uint *)(unaff_RDI + 7) = local_b4 + 1;
  uVar2 = uVar11 | 1;
  if (!bVar5) {
    uVar2 = uVar11 & 0xfffffffe;
  }
  *(uint *)(unaff_RDI + 6) = uVar2;
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return unaff_RDI;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


