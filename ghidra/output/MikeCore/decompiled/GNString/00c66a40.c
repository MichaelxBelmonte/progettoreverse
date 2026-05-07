// Function: FUN_00c66a40
// Address: 00c66a40
// Size: 4885 bytes
// Class: GNString


int FUN_00c66a40(uint param_1,longlong param_2,uint param_3,uint *param_4)

{
  bool bVar1;
  uint *puVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  short sVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  byte bVar19;
  int iVar20;
  int local_138;
  int local_134;
  uint local_130;
  uint local_12c;
  ulonglong local_128;
  int local_11c;
  uint local_118;
  undefined4 local_114;
  uint local_110;
  uint local_10c;
  ulonglong local_108;
  uint *local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  undefined2 local_b8 [32];
  undefined2 local_78 [32];
  longlong local_38;
  
  uVar14 = (ulonglong)param_3;
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  iVar8 = -0x32;
  if ((((unaff_RSI != (ulonglong *)0x0) && (param_2 != 0)) && (param_4 != (uint *)0x0)) &&
     (param_3 != 0)) {
    *(undefined2 *)(unaff_RDI + 0x18) = 0;
    *param_4 = param_1;
    local_134 = param_3 * 3;
    uVar16 = 0;
    iVar8 = 0;
    local_128 = uVar14;
    local_100 = param_4;
    do {
      if (iVar8 != 0) break;
      iVar8 = -0x32;
      if (unaff_RSI[1] <= *unaff_RSI) goto LAB_00c67d67;
      local_108 = CONCAT44(local_108._4_4_,(uint)*(byte *)(unaff_RDI + 6));
      uVar3 = FUN_00c66690();
      iVar8 = 0;
      switch(uVar3) {
      case 0:
      case 3:
        bVar4 = FUN_00c66690();
        *(ushort *)(unaff_RDI + 0x18) =
             *(ushort *)(unaff_RDI + 0x18) | (ushort)(1 << (bVar4 & 0x1f));
        sVar6 = FUN_00c66640();
        if (sVar6 != 0) {
LAB_00c67ac5:
          iVar8 = -0x32;
          goto LAB_00c67d67;
        }
        uVar17 = FUN_00c66640();
        uVar14 = (ulonglong)CONCAT31((int3)(uVar17 >> 8),(byte)uVar17 >> 1) & 0xffffffffffffff03;
        iVar8 = -0x32;
        if ((char)uVar14 == '\x03') goto LAB_00c67d67;
        bVar4 = *(byte *)(unaff_RDI + 5);
        local_f8 = uVar16;
        local_f0 = uVar14;
        if ((uVar17 & 0xf8) != 0) {
          iVar8 = FUN_00c66640();
          param_1 = FUN_00c66640();
          param_1 = param_1 | iVar8 << 0x10;
        }
        uVar18 = (uint)bVar4 - ((int)uVar14 * 8 & 0xffU);
        if ((uVar17 & 1) == 0) {
          FUN_00c66640();
          FUN_00c66640();
          local_10c = FUN_00c66640();
          uVar17 = FUN_00c66640();
          uVar11 = uVar17 & 0x1f;
          if (uVar11 != 0) {
            uVar14 = 0;
            do {
              uVar7 = FUN_00c66640();
              local_78[uVar14] = uVar7;
              uVar14 = uVar14 + 1;
            } while (uVar11 != uVar14);
          }
          local_110 = uVar11;
          if ((char)local_f0 != '\0') {
            FUN_00c66820();
          }
          FUN_00c65990(*(undefined1 *)(unaff_RDI + 8),(uVar17 >> 5 & 7) * (int)local_108 >> 2,
                       param_1,param_1);
          iVar8 = FUN_00c659d0(param_1,*(undefined8 *)(unaff_RDI + 0x30),uVar18,&local_11c);
          uVar14 = local_128;
          if (iVar8 != 0) goto LAB_00c67d67;
          if ((local_10c & 0xf0) != 0) {
            FUN_00c6a900(0,param_1,0x1f,uVar18);
          }
          FUN_00c6a900(local_78,param_1,local_110,uVar18);
          if ((char)local_f0 == '\0') {
            uVar16 = 0;
            bVar1 = true;
          }
          else {
            if (param_1 != 0) {
              uVar16 = 0;
              do {
                uVar7 = FUN_00c66640();
                *(undefined2 *)(*(longlong *)(unaff_RDI + 0x38) + uVar16 * 2) = uVar7;
                uVar16 = uVar16 + 1;
                uVar14 = local_128;
              } while (param_1 != uVar16);
            }
            bVar1 = false;
            uVar16 = local_f0;
          }
        }
        else {
          bVar4 = 0x20 - (char)uVar18;
          if (uVar18 < 0x11) {
            if (param_1 != 0) {
              uVar14 = 0;
              do {
                iVar8 = FUN_00c66640();
                *(int *)(*(longlong *)(unaff_RDI + 0x20) + uVar14 * 4) =
                     (iVar8 << (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
                uVar14 = uVar14 + 1;
              } while (param_1 != uVar14);
            }
          }
          else if (param_1 != 0) {
            local_108 = CONCAT44(local_108._4_4_,uVar18 - 0x10);
            local_f0 = (ulonglong)param_1;
            uVar14 = 0;
            do {
              iVar8 = FUN_00c66640();
              uVar17 = FUN_00c66640();
              *(uint *)(*(longlong *)(unaff_RDI + 0x20) + uVar14 * 4) =
                   uVar17 | (iVar8 << 0x10) >> (bVar4 & 0x1f);
              uVar14 = uVar14 + 1;
            } while (local_f0 != uVar14);
          }
          local_11c = uVar18 * param_1;
          bVar1 = true;
          uVar16 = 0;
          uVar14 = local_128;
        }
        puVar2 = local_100;
        uVar17 = (uint)*(byte *)(unaff_RDI + 5) << 0x1e | *(byte *)(unaff_RDI + 5) - 0x10 >> 2;
        if (uVar17 < 5) {
          iVar8 = (int)uVar14;
          switch(uVar17) {
          case 0:
            if (param_1 != 0) {
              uVar16 = local_f8 & 0xffffffff;
              lVar13 = *(longlong *)(unaff_RDI + 0x20);
              if ((ulonglong)param_1 - 1 < 3) {
                uVar15 = 0;
                uVar10 = 0;
              }
              else {
                uVar15 = 0;
                uVar10 = 0;
                do {
                  iVar9 = (int)uVar10;
                  *(undefined2 *)(param_2 + (uVar10 + uVar16) * 2) =
                       *(undefined2 *)(lVar13 + uVar15 * 4);
                  *(undefined2 *)(param_2 + ((uint)(iVar9 + iVar8) + uVar16) * 2) =
                       *(undefined2 *)(lVar13 + 4 + uVar15 * 4);
                  *(undefined2 *)(param_2 + ((iVar9 + param_3 * 2) + uVar16) * 2) =
                       *(undefined2 *)(lVar13 + 8 + uVar15 * 4);
                  *(undefined2 *)(param_2 + ((uint)(iVar9 + local_134) + uVar16) * 2) =
                       *(undefined2 *)(lVar13 + 0xc + uVar15 * 4);
                  uVar15 = uVar15 + 4;
                  uVar10 = (ulonglong)(uint)(iVar9 + iVar8 + iVar8 * 3);
                } while ((param_1 & 0xfffffffc) != uVar15);
              }
              if ((ulonglong)(param_1 & 3) != 0) {
                uVar12 = 0;
                do {
                  *(undefined2 *)(param_2 + (uVar10 + uVar16) * 2) =
                       *(undefined2 *)(lVar13 + uVar15 * 4 + uVar12 * 4);
                  uVar10 = (ulonglong)(uint)((int)uVar10 + iVar8);
                  uVar12 = uVar12 + 1;
                } while ((param_1 & 3) != uVar12);
              }
            }
            break;
          case 1:
            FUN_00c6cc70(param_1);
            break;
          case 2:
            if (bVar1) {
              FUN_00c6cb20(param_1);
            }
            else {
              FUN_00c6cbb0(uVar14 & 0xffffffff);
            }
            break;
          case 4:
            if (bVar1) {
              FUN_00c6cd10(param_1);
            }
            else {
              FUN_00c6cec0(uVar14 & 0xffffffff,param_2 + (local_f8 & 0xffffffff) * 4,param_1,
                           uVar16 & 0xff);
            }
          }
        }
        *puVar2 = param_1;
        uVar16 = (ulonglong)((int)local_f8 + 1);
        iVar8 = 0;
        break;
      case 1:
        uVar17 = (uint)uVar16 + 2;
        if ((uint)uVar14 < uVar17) {
          iVar8 = 0;
          if ((uint)uVar16 < (uint)uVar14) goto LAB_00c67951;
          goto LAB_00c67d67;
        }
        bVar4 = FUN_00c66690();
        *(ushort *)(unaff_RDI + 0x18) =
             *(ushort *)(unaff_RDI + 0x18) | (ushort)(1 << (bVar4 & 0x1f));
        sVar6 = FUN_00c66640();
        if (sVar6 != 0) goto LAB_00c67ac5;
        uVar18 = FUN_00c66640();
        bVar4 = (byte)uVar18 >> 1;
        uVar14 = (ulonglong)CONCAT31((int3)(uVar18 >> 8),bVar4) & 0xffffffffffffff03;
        iVar8 = -0x32;
        if ((char)uVar14 == '\x03') goto LAB_00c67d67;
        bVar19 = *(byte *)(unaff_RDI + 5);
        if ((uVar18 & 0xf8) != 0) {
          iVar8 = FUN_00c66640();
          param_1 = FUN_00c66640();
          param_1 = param_1 | iVar8 << 0x10;
        }
        if ((uVar18 & 1) == 0) {
          local_f8 = uVar16;
          local_f0 = uVar14;
          local_118 = FUN_00c66640();
          local_114 = FUN_00c66640();
          local_130 = FUN_00c66640();
          uVar18 = FUN_00c66640();
          local_110 = uVar18 & 0x1f;
          if (local_110 != 0) {
            uVar16 = (ulonglong)local_110;
            uVar14 = 0;
            do {
              uVar7 = FUN_00c66640();
              local_78[uVar14] = uVar7;
              uVar14 = uVar14 + 1;
            } while (uVar16 != uVar14);
          }
          local_12c = FUN_00c66640();
          uVar11 = FUN_00c66640();
          local_10c = uVar11 & 0x1f;
          if (local_10c != 0) {
            uVar16 = (ulonglong)local_10c;
            uVar14 = 0;
            do {
              uVar7 = FUN_00c66640();
              local_b8[uVar14] = uVar7;
              uVar14 = uVar14 + 1;
            } while (uVar16 != uVar14);
          }
          iVar9 = (uint)bVar19 + (bVar4 & 3) * -8 + 1;
          if ((char)local_f0 != '\0') {
            FUN_00c66820();
          }
          FUN_00c65990(*(undefined1 *)(unaff_RDI + 8),(uVar18 >> 5 & 7) * (int)local_108 >> 2,
                       param_1,param_1);
          iVar8 = FUN_00c659d0(param_1,*(undefined8 *)(unaff_RDI + 0x30),iVar9,&local_11c);
          uVar14 = local_128;
          if (iVar8 != 0) goto LAB_00c67d67;
          if ((local_130 & 0xf0) != 0) {
            FUN_00c6a900(0,param_1,0x1f,iVar9);
          }
          FUN_00c6a900(local_78,param_1,local_110,iVar9);
          FUN_00c65990(*(undefined1 *)(unaff_RDI + 8),(uVar11 >> 5 & 7) * (int)local_108 >> 2,
                       param_1,param_1);
          iVar8 = FUN_00c659d0(param_1,*(undefined8 *)(unaff_RDI + 0x30),iVar9,&local_138);
          if (iVar8 != 0) goto LAB_00c67d67;
          if ((local_12c & 0xf0) != 0) {
            FUN_00c6a900(0,param_1,0x1f,iVar9);
          }
          FUN_00c6a900(local_b8,param_1,local_10c,iVar9);
          uVar18 = local_118;
          if (((char)local_f0 != '\0') && (param_1 * 2 != 0)) {
            uVar16 = 0;
            do {
              uVar7 = FUN_00c66640();
              *(undefined2 *)(*(longlong *)(unaff_RDI + 0x38) + uVar16 * 2) = uVar7;
              uVar7 = FUN_00c66640();
              *(undefined2 *)(*(longlong *)(unaff_RDI + 0x38) + 2 + uVar16 * 2) = uVar7;
              uVar16 = uVar16 + 2;
              uVar14 = local_128;
              uVar18 = local_118;
            } while (uVar16 < param_1 * 2);
          }
        }
        else {
          bVar4 = *(byte *)(unaff_RDI + 5);
          bVar19 = 0x20 - bVar4;
          if (bVar4 < 0x11) {
            local_f8 = uVar16;
            if (param_1 != 0) {
              local_108 = (ulonglong)param_1;
              uVar14 = 0;
              do {
                iVar8 = FUN_00c66640();
                *(int *)(*(longlong *)(unaff_RDI + 0x20) + uVar14 * 4) =
                     (iVar8 << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
                iVar8 = FUN_00c66640();
                *(int *)(*(longlong *)(unaff_RDI + 0x28) + uVar14 * 4) =
                     (iVar8 << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
                uVar14 = uVar14 + 1;
              } while (local_108 != uVar14);
            }
          }
          else {
            local_f8 = uVar16;
            if (param_1 != 0) {
              local_108 = CONCAT44(local_108._4_4_,bVar4 - 0x10);
              local_f0 = (ulonglong)param_1;
              uVar14 = 0;
              do {
                iVar8 = FUN_00c66640();
                uVar18 = FUN_00c66640();
                *(uint *)(*(longlong *)(unaff_RDI + 0x20) + uVar14 * 4) =
                     uVar18 | (iVar8 << 0x10) >> (bVar19 & 0x1f);
                iVar8 = FUN_00c66640();
                uVar18 = FUN_00c66640();
                *(uint *)(*(longlong *)(unaff_RDI + 0x28) + uVar14 * 4) =
                     uVar18 | (iVar8 << 0x10) >> (bVar19 & 0x1f);
                uVar14 = uVar14 + 1;
              } while (local_f0 != uVar14);
            }
          }
          local_138 = bVar4 * param_1;
          uVar14 = local_128;
          local_11c = local_138;
          uVar18 = 0;
        }
        puVar2 = local_100;
        switch((uint)*(byte *)(unaff_RDI + 5) << 0x1e | *(byte *)(unaff_RDI + 5) - 0x10 >> 2) {
        case 0:
          FUN_00c6c330(uVar14 & 0xffffffff,param_2 + (local_f8 & 0xffffffff) * 2,param_1,
                       uVar18 & 0xff);
          break;
        case 1:
          FUN_00c6c530(uVar14 & 0xffffffff,(ulonglong)(uint)((int)local_f8 * 3) + param_2,param_1,
                       uVar18 & 0xff);
          break;
        case 2:
          FUN_00c6c630(uVar14 & 0xffffffff,(ulonglong)(uint)((int)local_f8 * 3) + param_2,param_1,
                       uVar18 & 0xff);
          break;
        case 4:
          FUN_00c6c8c0(uVar14 & 0xffffffff,param_2 + (local_f8 & 0xffffffff) * 4,param_1,
                       uVar18 & 0xff);
        }
        *puVar2 = param_1;
        iVar8 = 0;
        uVar16 = (ulonglong)uVar17;
        break;
      case 2:
      case 5:
        iVar8 = -0x32;
        break;
      case 4:
        iVar8 = FUN_00c67de0();
        break;
      case 6:
        cVar5 = FUN_00c66690();
        if (cVar5 == '\x0f') {
          FUN_00c66690();
        }
        FUN_00c66820();
        iVar8 = 0;
        if (unaff_RSI[1] < *unaff_RSI) {
          iVar8 = -0x32;
        }
        break;
      case 7:
        FUN_00c66720();
        iVar8 = 0;
        goto LAB_00c67d67;
      }
    } while ((uint)uVar16 < (uint)uVar14);
    if ((uint)uVar16 < (uint)uVar14) {
LAB_00c67951:
      iVar9 = (int)uVar16;
      iVar20 = (int)uVar14;
      if (iVar20 == 1) {
        if (((1U - iVar9 & 1) != 0) &&
           (((cVar5 = *(char *)(unaff_RDI + 5), cVar5 == '\x10' || (cVar5 == '\x18')) ||
            (cVar5 == ' ')))) {
          ___bzero();
        }
        if (iVar9 != 0) {
          do {
            do {
              cVar5 = *(char *)(unaff_RDI + 5);
              if (((cVar5 == '\x10') || (cVar5 == '\x18')) || (cVar5 == ' ')) {
                ___bzero();
              }
              cVar5 = *(char *)(unaff_RDI + 5);
            } while (((cVar5 != '\x10') && (cVar5 != '\x18')) && (cVar5 != ' '));
            ___bzero();
          } while( true );
        }
      }
      else {
        uVar17 = param_1 * iVar20;
        uVar18 = param_1 * 3 * iVar20;
        uVar14 = uVar14 & 0xffffffff;
        if (uVar17 == 0) {
          if (uVar18 == 0) {
            if (*(char *)(unaff_RDI + 5) == '\x18') {
              uVar10 = ~uVar16;
              if ((iVar20 - iVar9 & 7U) != 0) {
                lVar13 = 0;
                do {
                  lVar13 = lVar13 + -1;
                } while (-lVar13 != ((ulonglong)(uint)(iVar20 - iVar9) & 7));
                uVar16 = uVar16 - lVar13;
              }
              if (6 < uVar10 + uVar14) {
                lVar13 = uVar14 - uVar16;
                do {
                  lVar13 = lVar13 + -8;
                } while (lVar13 != 0);
              }
            }
            else {
              uVar10 = ~uVar16;
              if ((iVar20 - iVar9 & 7U) != 0) {
                lVar13 = 0;
                do {
                  lVar13 = lVar13 + -1;
                } while (-lVar13 != ((ulonglong)(uint)(iVar20 - iVar9) & 7));
                uVar16 = uVar16 - lVar13;
              }
              if (6 < uVar10 + uVar14) {
                lVar13 = uVar14 - uVar16;
                do {
                  lVar13 = lVar13 + -8;
                } while (lVar13 != 0);
              }
            }
          }
          else if (*(char *)(unaff_RDI + 5) == '\x18') {
            do {
              if (*(char *)(unaff_RDI + 5) == '\x18') {
                lVar13 = (ulonglong)(uint)((int)uVar16 * 3) + param_2;
                uVar10 = 0;
                do {
                  iVar9 = (int)uVar10;
                  *(undefined1 *)(lVar13 + uVar10) = 0;
                  *(undefined1 *)(lVar13 + (ulonglong)(iVar9 + 1)) = 0;
                  *(undefined1 *)(lVar13 + (ulonglong)(iVar9 + 2)) = 0;
                  uVar17 = iVar9 + iVar20 * 3;
                  uVar10 = (ulonglong)uVar17;
                } while (uVar17 < uVar18);
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 != uVar14);
          }
          else {
            uVar10 = ~uVar16;
            if ((iVar20 - iVar9 & 7U) != 0) {
              lVar13 = 0;
              do {
                lVar13 = lVar13 + -1;
              } while (-lVar13 != ((ulonglong)(uint)(iVar20 - iVar9) & 7));
              uVar16 = uVar16 - lVar13;
            }
            if (6 < uVar10 + uVar14) {
              lVar13 = uVar14 - uVar16;
              do {
                lVar13 = lVar13 + -8;
              } while (lVar13 != 0);
            }
          }
        }
        else if (uVar18 == 0) {
          cVar5 = *(char *)(unaff_RDI + 5);
          do {
            if (cVar5 == '\x10') {
              uVar10 = 0;
              do {
                *(undefined2 *)(param_2 + (uVar10 + uVar16) * 2) = 0;
                uVar18 = (int)uVar10 + iVar20;
                uVar10 = (ulonglong)uVar18;
              } while (uVar18 < uVar17);
            }
            else if (cVar5 == ' ') {
              uVar10 = 0;
              do {
                *(undefined4 *)(param_2 + (uVar10 + uVar16) * 4) = 0;
                uVar18 = (int)uVar10 + iVar20;
                uVar10 = (ulonglong)uVar18;
              } while (uVar18 < uVar17);
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar14);
        }
        else {
          do {
            cVar5 = *(char *)(unaff_RDI + 5);
            if (cVar5 == '\x10') {
              uVar11 = 0;
              do {
                *(undefined2 *)(param_2 + (uVar11 + uVar16) * 2) = 0;
                uVar11 = uVar11 + iVar20;
              } while (uVar11 < uVar17);
            }
            else if (cVar5 == '\x18') {
              lVar13 = (ulonglong)(uint)((int)uVar16 * 3) + param_2;
              uVar10 = 0;
              do {
                iVar9 = (int)uVar10;
                *(undefined1 *)(lVar13 + uVar10) = 0;
                *(undefined1 *)(lVar13 + (ulonglong)(iVar9 + 1)) = 0;
                *(undefined1 *)(lVar13 + (ulonglong)(iVar9 + 2)) = 0;
                uVar11 = iVar9 + iVar20 * 3;
                uVar10 = (ulonglong)uVar11;
              } while (uVar11 < uVar18);
            }
            else if (cVar5 == ' ') {
              uVar11 = 0;
              do {
                *(undefined4 *)(param_2 + (uVar11 + uVar16) * 4) = 0;
                uVar11 = uVar11 + iVar20;
              } while (uVar11 < uVar17);
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar14);
        }
      }
    }
  }
LAB_00c67d67:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


