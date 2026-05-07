// Function: FUN_01cf7d30
// Address: 01cf7d30
// Size: 1380 bytes
// Class: GNClipView


/* WARNING: Removing unreachable block (ram,0x01cf7dec) */
/* WARNING: Removing unreachable block (ram,0x01cf7df5) */
/* WARNING: Removing unreachable block (ram,0x01cf81c3) */
/* WARNING: Removing unreachable block (ram,0x01cf81cc) */
/* WARNING: Removing unreachable block (ram,0x01cf7eb1) */
/* WARNING: Removing unreachable block (ram,0x01cf7ebe) */
/* WARNING: Removing unreachable block (ram,0x01cf8250) */
/* WARNING: Removing unreachable block (ram,0x01cf8259) */
/* WARNING: Removing unreachable block (ram,0x01cf8218) */
/* WARNING: Removing unreachable block (ram,0x01cf8122) */
/* WARNING: Removing unreachable block (ram,0x01cf810b) */
/* WARNING: Removing unreachable block (ram,0x01cf80c9) */
/* WARNING: Removing unreachable block (ram,0x01cf80f2) */
/* WARNING: Removing unreachable block (ram,0x01cf80fb) */
/* WARNING: Removing unreachable block (ram,0x01cf8096) */
/* WARNING: Removing unreachable block (ram,0x01cf80a4) */
/* WARNING: Removing unreachable block (ram,0x01cf80ad) */
/* WARNING: Removing unreachable block (ram,0x01cf80b2) */
/* WARNING: Removing unreachable block (ram,0x01cf817a) */
/* WARNING: Removing unreachable block (ram,0x01cf817c) */
/* WARNING: Removing unreachable block (ram,0x01cf8182) */
/* WARNING: Removing unreachable block (ram,0x01cf818b) */
/* WARNING: Removing unreachable block (ram,0x01cf8190) */
/* WARNING: Removing unreachable block (ram,0x01cf8194) */
/* WARNING: Removing unreachable block (ram,0x01cf81d7) */
/* WARNING: Removing unreachable block (ram,0x01cf81e0) */
/* WARNING: Removing unreachable block (ram,0x01cf81e5) */
/* WARNING: Removing unreachable block (ram,0x01cf81fa) */
/* WARNING: Removing unreachable block (ram,0x01cf7f12) */
/* WARNING: Removing unreachable block (ram,0x01cf7f1b) */
/* WARNING: Removing unreachable block (ram,0x01cf7f79) */
/* WARNING: Removing unreachable block (ram,0x01cf7f82) */
/* WARNING: Removing unreachable block (ram,0x01cf8119) */
/* WARNING: Removing unreachable block (ram,0x01cf813e) */
/* WARNING: Removing unreachable block (ram,0x01cf8167) */
/* WARNING: Removing unreachable block (ram,0x01cf8170) */
/* WARNING: Removing unreachable block (ram,0x01cf826d) */
/* WARNING: Removing unreachable block (ram,0x01cf8127) */
/* WARNING: Removing unreachable block (ram,0x01cf820f) */
/* WARNING: Removing unreachable block (ram,0x01cf821d) */
/* WARNING: Removing unreachable block (ram,0x01cf8287) */
/* WARNING: Removing unreachable block (ram,0x01cf8221) */
/* WARNING: Removing unreachable block (ram,0x01cf8264) */
/* WARNING: Removing unreachable block (ram,0x01cf8272) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf7d30(void)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  longlong *unaff_RDI;
  float fVar5;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  longlong local_40;
  char local_38;
  
  iVar4 = FUN_01d3a5a0();
  if (iVar4 != 1) {
    if (iVar4 == 7) {
      if (unaff_RDI[0x27] == 0) {
        return;
      }
      uVar6 = *(undefined8 *)(unaff_RDI[0x27] + 0x10c);
      fVar10 = 0.0 - (float)uVar6;
      fVar13 = 0.0 - (float)((ulonglong)uVar6 >> 0x20);
      iVar4 = FUN_01d3b650();
      if (iVar4 != 1) {
        (**(code **)(*unaff_RDI + 0x7b8))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            goto LAB_01cf7f87;
          }
        }
        else if (local_40 != 0) {
LAB_01cf7f87:
          FUN_01d97ec0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 == 0) {
            (**(code **)(MACH_HEADER._0_8_ + 0x7b8))();
          }
          FUN_00d50b20();
        }
        iVar4 = 1;
        fVar14 = fVar13;
        goto LAB_01cf7fc0;
      }
      (**(code **)(*unaff_RDI + 0x7b8))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_01cf7f20;
        }
      }
      else if (local_40 != 0) {
LAB_01cf7f20:
        FUN_01d97e80();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == 0) {
          (**(code **)(MACH_HEADER._0_8_ + 0x7b8))();
        }
        FUN_00d50b20();
      }
      iVar4 = 0;
      fVar14 = fVar10;
LAB_01cf7fc0:
      uVar6 = FUN_01d3b640();
      fVar5 = (float)uVar6 * DAT_023908ec;
      auVar11._0_4_ = _DAT_023945e0 & (uint)fVar5;
      auVar11._4_4_ = _UNK_023945e4 & (uint)((ulonglong)uVar6 >> 0x20);
      auVar11._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb;
      auVar11._12_4_ = _UNK_023945ec & (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar12._4_12_ = SUB1612(auVar11 | _DAT_023945f0,4);
      auVar12._0_4_ = SUB164(auVar11 | _DAT_023945f0,0) + fVar5;
      auVar7._0_12_ = ZEXT812(0);
      auVar7._12_4_ = 0;
      auVar8 = roundss(auVar7,auVar12,0xb);
      fVar14 = fVar14 - auVar8._0_4_;
      auVar9._0_4_ = -(uint)(iVar4 == _DAT_0238fcc0);
      auVar9._4_4_ = -(uint)(iVar4 == _UNK_0238fcc4);
      auVar9._8_4_ = -(uint)(iVar4 == _UNK_0238fcc8);
      auVar9._12_4_ = -(uint)(iVar4 == _UNK_0238fccc);
      auVar2._4_4_ = fVar13;
      auVar2._0_4_ = fVar10;
      auVar2._8_8_ = 0;
      auVar8._4_4_ = fVar14;
      auVar8._0_4_ = fVar14;
      auVar8._8_4_ = fVar14;
      auVar8._12_4_ = fVar14;
      blendvps(auVar2,auVar8,auVar9);
      FUN_01cf5ff0();
      return;
    }
    if (iVar4 != 6) goto LAB_01cf7e8f;
  }
  plVar1 = (longlong *)unaff_RDI[0x27];
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x548))();
  if (cVar3 == '\0') {
    FUN_00d50b20();
  }
  else {
    cVar3 = *(char *)((longlong)unaff_RDI + 0x151);
    FUN_00d50b20();
    if (cVar3 == '\0') {
      *(undefined1 *)((longlong)unaff_RDI + 0x151) = 1;
      plVar1 = (longlong *)unaff_RDI[0x27];
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x3c0))();
      FUN_00d50b20();
      *(undefined1 *)((longlong)unaff_RDI + 0x151) = 0;
      return;
    }
  }
  if ((iVar4 == 1) || (iVar4 == 6)) {
    FUN_01d3b630();
  }
LAB_01cf7e8f:
  FUN_01e459c0();
  return;
}


