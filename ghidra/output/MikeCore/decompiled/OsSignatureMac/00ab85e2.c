// Function: FUN_00ab85e2
// Address: 00ab85e2
// Size: 741 bytes
// Class: OsSignatureMac


/* WARNING: Removing unreachable block (ram,0x00ab8892) */
/* WARNING: Removing unreachable block (ram,0x00ab88a4) */

longlong * FUN_00ab85e2(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  void *pvVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  
  unaff_RDI[1] = 0;
  *unaff_RDI = 0;
  if ((DAT_028a0a78 != '\0') && (lVar3 = *(longlong *)(unaff_RSI + 0x70), lVar3 != 0)) {
    lVar5 = unaff_RSI + 0x70;
    do {
      if (param_2 <= *(int *)(lVar3 + 0x20)) {
        lVar5 = lVar3;
      }
      lVar3 = *(longlong *)(lVar3 + (ulonglong)(*(int *)(lVar3 + 0x20) < param_2) * 8);
    } while (lVar3 != 0);
    if ((lVar5 != unaff_RSI + 0x70) && (*(int *)(lVar5 + 0x20) <= param_2)) {
      if (*(longlong **)(lVar5 + 0x28) != (longlong *)(lVar5 + 0x30)) {
        plVar7 = *(longlong **)(lVar5 + 0x28);
        do {
          pvVar6 = (void *)(ulonglong)(uint)((int)plVar7[6] - (int)plVar7[5]);
          lVar3 = param_1 + 0xf8;
          FUN_00ab94d4(pvVar6,plVar7[5],param_1 + 0xf8,param_1 + 0x40,1);
          if ((*(longlong *)(lVar5 + 0x38) == 1) ||
             (iVar2 = _memcmp(pvVar6,(void *)(*(longlong *)(param_1 + 0x120) -
                                             *(longlong *)(param_1 + 0x118)),(size_t)lVar3),
             iVar2 == 0)) {
            if (uStack_40 != (longlong *)0x0) {
              LOCK();
              uStack_40[1] = uStack_40[1] + 1;
              UNLOCK();
            }
            *unaff_RDI = local_48;
            plVar7 = (longlong *)unaff_RDI[1];
            unaff_RDI[1] = (longlong)uStack_40;
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar7 + 1;
              lVar3 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar3 == 0) {
                (**(code **)(*plVar7 + 0x10))();
                std::__shared_weak_count::__release_weak();
              }
            }
            if (uStack_40 != (longlong *)0x0) {
              LOCK();
              plVar7 = uStack_40 + 1;
              lVar3 = *plVar7;
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              if (lVar3 == 0) {
                (**(code **)(*uStack_40 + 0x10))();
                std::__shared_weak_count::__release_weak();
              }
            }
            break;
          }
          if (uStack_40 != (longlong *)0x0) {
            LOCK();
            plVar1 = uStack_40 + 1;
            lVar3 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar3 == 0) {
              (**(code **)(*uStack_40 + 0x10))();
              std::__shared_weak_count::__release_weak();
            }
          }
          plVar1 = (longlong *)plVar7[1];
          if ((longlong *)plVar7[1] == (longlong *)0x0) {
            plVar4 = (longlong *)plVar7[2];
            if ((longlong *)*plVar4 != plVar7) {
              do {
                plVar7 = (longlong *)plVar7[2];
                plVar4 = (longlong *)plVar7[2];
              } while ((longlong *)*plVar4 != plVar7);
            }
          }
          else {
            do {
              plVar4 = plVar1;
              plVar1 = (longlong *)*plVar4;
            } while ((longlong *)*plVar4 != (longlong *)0x0);
          }
          plVar7 = plVar4;
        } while (plVar4 != (longlong *)(lVar5 + 0x30));
        if (*unaff_RDI != 0) {
          return unaff_RDI;
        }
      }
    }
  }
  lVar3 = *(longlong *)(unaff_RSI + 0x58);
  if (lVar3 != 0) {
    lVar5 = unaff_RSI + 0x58;
    do {
      if (param_2 <= *(int *)(lVar3 + 0x20)) {
        lVar5 = lVar3;
      }
      lVar3 = *(longlong *)(lVar3 + (ulonglong)(*(int *)(lVar3 + 0x20) < param_2) * 8);
    } while (lVar3 != 0);
    if ((lVar5 != unaff_RSI + 0x58) && (*(int *)(lVar5 + 0x20) <= param_2)) {
      FUN_00ab9774(*(undefined8 *)PTR__kSecCodeInfoUnique_024a9988,*(undefined8 *)(lVar5 + 0x40),
                   param_1 + 0xf8,param_1 + 0x40);
      plVar7 = (longlong *)unaff_RDI[1];
      *(undefined4 *)unaff_RDI = (undefined4)local_48;
      *(undefined4 *)((longlong)unaff_RDI + 4) = local_48._4_4_;
      *(undefined4 *)(unaff_RDI + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)unaff_RDI + 0xc) = uStack_40._4_4_;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  return unaff_RDI;
}


