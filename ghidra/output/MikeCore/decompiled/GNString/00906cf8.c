// Function: FUN_00906cf8
// Address: 00906cf8
// Size: 1898 bytes
// Class: GNString


int FUN_00906cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *unaff_RSI;
  ulonglong uVar8;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  int local_4c;
  short local_46 [3];
  uint local_34;
  
  FUN_0088d1d0();
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar19 = unaff_RDI + 0x1b0;
  lVar20 = unaff_RDI + 0x198;
  lVar21 = unaff_RDI + 0x180;
  lVar10 = unaff_RDI + 0x28;
  plVar17 = (longlong *)(unaff_RDI + 0x10);
  lVar11 = unaff_RDI + 10;
  lVar12 = unaff_RDI + 9;
  lVar13 = unaff_RDI + 8;
  do {
    psVar4 = local_46;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,&local_4c,param_3,param_4,lVar10,lVar11,lVar12,lVar13,uVar14,uVar15,
                       uVar16,plVar17,lVar19,lVar20,lVar21);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar14 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_46[0] < 0x28) {
      if (local_46[0] < 0x14) {
        if (local_46[0] == 10) {
          if (local_4c != 2) {
            iVar3 = (**(code **)(*unaff_RSI + 0x160))();
            goto LAB_009072ee;
          }
          iVar3 = (**(code **)(*unaff_RSI + 0x118))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0x230) = 1;
        }
        else if (local_46[0] == 0xb) {
          if (local_4c != 2) {
            iVar3 = (**(code **)(*unaff_RSI + 0x160))();
            goto LAB_009072ee;
          }
          iVar3 = (**(code **)(*unaff_RSI + 0x118))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0x231) = 1;
        }
        else {
          if (local_46[0] != 0xc) goto LAB_00907220;
          if (local_4c != 2) {
            iVar3 = (**(code **)(*unaff_RSI + 0x160))();
            goto LAB_009072ee;
          }
          iVar3 = (**(code **)(*unaff_RSI + 0x118))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0x232) = 1;
        }
      }
      else if (local_46[0] == 0x14) {
        if (local_4c != 8) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_009072ee;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(unaff_RDI + 0xc) = local_34;
        *(undefined1 *)(unaff_RDI + 0x233) = 1;
      }
      else if (local_46[0] == 0x1e) {
        if (local_4c != 0xf) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_009072ee;
        }
        lVar7 = *(longlong *)(unaff_RDI + 0x10);
        uVar9 = extraout_XMM0_Da;
        plVar18 = plVar17;
        for (lVar6 = *(longlong *)(unaff_RDI + 0x18); lVar6 != lVar7; lVar6 = lVar6 + -0x38) {
          uVar9 = (*(code *)**(undefined8 **)(lVar6 + -0x38))();
        }
        *(longlong *)(unaff_RDI + 0x18) = lVar7;
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar9,&local_34);
        FUN_0088dda0();
        iVar1 = iVar1 + iVar2;
        plVar17 = plVar18;
        if (local_34 != 0) {
          lVar7 = 0;
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*(longlong *)(*plVar18 + lVar7) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
            lVar7 = lVar7 + 0x38;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x234) = 1;
      }
      else {
        if (local_46[0] != 0x23) goto LAB_00907220;
        if (local_4c != 0xc) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_009072ee;
        }
        iVar3 = FUN_008fab98();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x235) = 1;
      }
    }
    else if (local_46[0] < 0x46) {
      if (local_46[0] == 0x28) {
        if (local_4c != 0xf) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_009072ee;
        }
        *(undefined8 *)(unaff_RDI + 0x188) = *(undefined8 *)(unaff_RDI + 0x180);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_34);
        uVar8 = (ulonglong)local_34;
        uVar5 = *(longlong *)(unaff_RDI + 0x188) - *(longlong *)(unaff_RDI + 0x180);
        if (uVar5 < uVar8) {
          FUN_0088d550();
        }
        else if (uVar8 < uVar5) {
          *(ulonglong *)(unaff_RDI + 0x188) = *(longlong *)(unaff_RDI + 0x180) + uVar8;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x236) = 1;
      }
      else if (local_46[0] == 0x32) {
        if (local_4c != 0xf) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_009072ee;
        }
        *(undefined8 *)(unaff_RDI + 0x1a0) = *(undefined8 *)(unaff_RDI + 0x198);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_34);
        uVar8 = (ulonglong)local_34;
        uVar5 = *(longlong *)(unaff_RDI + 0x1a0) - *(longlong *)(unaff_RDI + 0x198);
        if (uVar5 < uVar8) {
          FUN_0088d550();
        }
        else if (uVar8 < uVar5) {
          *(ulonglong *)(unaff_RDI + 0x1a0) = *(longlong *)(unaff_RDI + 0x198) + uVar8;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x237) = 1;
      }
      else {
        if (local_46[0] != 0x3c) goto LAB_00907220;
        if (local_4c != 0xf) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_009072ee;
        }
        *(undefined8 *)(unaff_RDI + 0x1b8) = *(undefined8 *)(unaff_RDI + 0x1b0);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_34);
        uVar8 = (ulonglong)local_34;
        uVar5 = *(longlong *)(unaff_RDI + 0x1b8) - *(longlong *)(unaff_RDI + 0x1b0);
        if (uVar5 < uVar8) {
          FUN_0088d550();
        }
        else if (uVar8 < uVar5) {
          *(ulonglong *)(unaff_RDI + 0x1b8) = *(longlong *)(unaff_RDI + 0x1b0) + uVar8;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x238) = 1;
      }
    }
    else if (local_46[0] < 0x50) {
      if (local_46[0] == 0x46) {
        if (local_4c == 0xc) {
          iVar3 = FUN_0090189a();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0x239) = 1;
          goto LAB_009072f4;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else if (local_46[0] == 0x4b) {
        if (local_4c == 10) {
          iVar3 = (**(code **)(*unaff_RSI + 0x140))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0x23a) = 1;
          goto LAB_009072f4;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else {
LAB_00907220:
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
LAB_009072ee:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_46[0] == 0x50) {
      if (local_4c != 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_009072ee;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x23b) = 1;
    }
    else {
      if (local_46[0] != 0x51) goto LAB_00907220;
      if (local_4c != 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_009072ee;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x23c) = 1;
    }
LAB_009072f4:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


