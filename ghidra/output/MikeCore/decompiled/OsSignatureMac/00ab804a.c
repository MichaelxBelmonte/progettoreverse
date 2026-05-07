// Function: FUN_00ab804a
// Address: 00ab804a
// Size: 1134 bytes
// Class: OsSignatureMac
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libbinarydsig/platform/mac...
//   "What? We should always find a signing certificate chain."
//   "virtual pace::SharedSignedDigest_T pace::OsSignatureMac::computeMatchingDigestForVerify(const pace:...


/* WARNING: Removing unreachable block (ram,0x00ab842c) */
/* WARNING: Removing unreachable block (ram,0x00ab843e) */
/* WARNING: Removing unreachable block (ram,0x00ab8355) */
/* WARNING: Removing unreachable block (ram,0x00ab836b) */
/* WARNING: Removing unreachable block (ram,0x00ab849d) */

void FUN_00ab804a(string *param_1,string *param_2,size_t param_3)

{
  longlong *plVar1;
  string sVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  void *pvVar9;
  void *pvVar10;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  void *pvVar11;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar5 = 0;
  unaff_RDI[1] = 0;
  *unaff_RDI = 0;
  if (param_2[0x136] != (string)0x0) {
    std::string::operator=(param_1,param_2);
    uVar5 = FUN_00abeec2();
  }
  lVar7 = FUN_008dfe28();
  sVar2 = param_2[0x40];
  pvVar9 = (void *)(ulonglong)((byte)sVar2 >> 1);
  pvVar10 = pvVar9;
  if (((byte)sVar2 & 1) != 0) {
    pvVar10 = *(void **)(param_2 + 0x48);
  }
  bVar3 = *(byte *)(lVar7 + 0xf0);
  if ((bVar3 & 1) == 0) {
    pvVar11 = (void *)(ulonglong)(bVar3 >> 1);
  }
  else {
    pvVar11 = *(void **)(lVar7 + 0xf8);
  }
  if (pvVar10 == pvVar11) {
    param_3 = CONCAT31((int3)(param_3 >> 8),1);
    if ((bVar3 & 1) == 0) {
      lVar7 = lVar7 + 0xf1;
    }
    else {
      lVar7 = *(longlong *)(lVar7 + 0x100);
    }
    if (((byte)sVar2 & 1) == 0) {
      if (pvVar10 != (void *)0x0) {
        pvVar10 = (void *)0x0;
        do {
          if ((param_2 + 0x41)[(longlong)pvVar10] != *(string *)(lVar7 + (longlong)pvVar10))
          goto LAB_00ab8140;
          pvVar10 = (void *)((longlong)pvVar10 + 1);
        } while (pvVar9 != pvVar10);
      }
    }
    else if ((pvVar10 != (void *)0x0) && (iVar6 = _memcmp(pvVar9,pvVar10,param_3), iVar6 != 0))
    goto LAB_00ab8140;
    FUN_00ab84e8(param_2 + 0xf8,uVar5);
    goto LAB_00ab830d;
  }
LAB_00ab8140:
  lVar7 = FUN_008dfe28();
  sVar2 = param_2[0x40];
  pvVar9 = (void *)(ulonglong)((byte)sVar2 >> 1);
  pvVar10 = pvVar9;
  if (((byte)sVar2 & 1) != 0) {
    pvVar10 = *(void **)(param_2 + 0x48);
  }
  bVar3 = *(byte *)(lVar7 + 0x108);
  if ((bVar3 & 1) == 0) {
    pvVar11 = (void *)(ulonglong)(bVar3 >> 1);
  }
  else {
    pvVar11 = *(void **)(lVar7 + 0x110);
  }
  if (pvVar10 == pvVar11) {
    param_3 = CONCAT31((int3)(param_3 >> 8),1);
    if ((bVar3 & 1) == 0) {
      lVar7 = lVar7 + 0x109;
    }
    else {
      lVar7 = *(longlong *)(lVar7 + 0x118);
    }
    if (((byte)sVar2 & 1) == 0) {
      if (pvVar10 != (void *)0x0) {
        pvVar10 = (void *)0x0;
        do {
          if ((param_2 + 0x41)[(longlong)pvVar10] != *(string *)(lVar7 + (longlong)pvVar10))
          goto LAB_00ab81ee;
          pvVar10 = (void *)((longlong)pvVar10 + 1);
        } while (pvVar9 != pvVar10);
      }
    }
    else if ((pvVar10 != (void *)0x0) && (iVar6 = _memcmp(pvVar9,pvVar10,param_3), iVar6 != 0))
    goto LAB_00ab81ee;
    FUN_00ab85e2(param_2,uVar5);
  }
  else {
LAB_00ab81ee:
    lVar7 = FUN_008dfe28();
    sVar2 = param_2[0x40];
    pvVar9 = (void *)(ulonglong)((byte)sVar2 >> 1);
    pvVar10 = pvVar9;
    if (((byte)sVar2 & 1) != 0) {
      pvVar10 = *(void **)(param_2 + 0x48);
    }
    bVar3 = *(byte *)(lVar7 + 0x120);
    if ((bVar3 & 1) == 0) {
      pvVar11 = (void *)(ulonglong)(bVar3 >> 1);
    }
    else {
      pvVar11 = *(void **)(lVar7 + 0x128);
    }
    if (pvVar10 != pvVar11) {
LAB_00ab829f:
      lVar7 = FUN_008dfe28();
      sVar2 = param_2[0x40];
      pvVar9 = (void *)(ulonglong)((byte)sVar2 >> 1);
      pvVar10 = pvVar9;
      if (((byte)sVar2 & 1) != 0) {
        pvVar10 = *(void **)(param_2 + 0x48);
      }
      bVar3 = *(byte *)(lVar7 + 0xc0);
      if ((bVar3 & 1) == 0) {
        pvVar11 = (void *)(ulonglong)(bVar3 >> 1);
      }
      else {
        pvVar11 = *(void **)(lVar7 + 200);
      }
      if (pvVar10 != pvVar11) {
        return;
      }
      if ((bVar3 & 1) == 0) {
        lVar7 = lVar7 + 0xc1;
      }
      else {
        lVar7 = *(longlong *)(lVar7 + 0xd0);
      }
      if (((byte)sVar2 & 1) == 0) {
        if (pvVar10 != (void *)0x0) {
          pvVar10 = (void *)0x0;
          do {
            if ((param_2 + 0x41)[(longlong)pvVar10] != *(string *)(lVar7 + (longlong)pvVar10)) {
              return;
            }
            pvVar10 = (void *)((longlong)pvVar10 + 1);
          } while (pvVar9 != pvVar10);
        }
      }
      else if ((pvVar10 != (void *)0x0) &&
              (iVar6 = _memcmp(pvVar9,pvVar10,CONCAT31((int3)(param_3 >> 8),1)), iVar6 != 0)) {
        return;
      }
      FUN_00ab8a5c(param_2 + 0xf8,*(undefined8 *)(*(longlong *)(unaff_RSI + 0x50) + 0x40));
      plVar4 = (longlong *)unaff_RDI[1];
      *(undefined4 *)unaff_RDI = local_48;
      *(undefined4 *)((longlong)unaff_RDI + 4) = uStack_44;
      *(undefined4 *)(unaff_RDI + 1) = uStack_40;
      *(undefined4 *)((longlong)unaff_RDI + 0xc) = uStack_3c;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar7 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*plVar4 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
      if (*unaff_RDI != 0) {
        return;
      }
      FUN_00925fd0();
      uVar8 = FUN_00926010();
      uVar5 = FUN_00928ab0("virtual pace::SharedSignedDigest_T pace::OsSignatureMac::computeMatchingDigestForVerify(const pace::eden::thrift::pub::SignedDigest &)"
                           ,0x372);
      FUN_009bd5cb(uVar5,uVar8);
      return;
    }
    param_3 = CONCAT31((int3)(param_3 >> 8),1);
    if ((bVar3 & 1) == 0) {
      lVar7 = lVar7 + 0x121;
    }
    else {
      lVar7 = *(longlong *)(lVar7 + 0x130);
    }
    if (((byte)sVar2 & 1) == 0) {
      if (pvVar10 != (void *)0x0) {
        pvVar10 = (void *)0x0;
        do {
          if ((param_2 + 0x41)[(longlong)pvVar10] != *(string *)(lVar7 + (longlong)pvVar10))
          goto LAB_00ab829f;
          pvVar10 = (void *)((longlong)pvVar10 + 1);
        } while (pvVar9 != pvVar10);
      }
    }
    else if ((pvVar10 != (void *)0x0) && (iVar6 = _memcmp(pvVar9,pvVar10,param_3), iVar6 != 0))
    goto LAB_00ab829f;
    FUN_00ab88e4(param_2,uVar5);
  }
LAB_00ab830d:
  plVar4 = (longlong *)unaff_RDI[1];
  *(undefined4 *)unaff_RDI = local_48;
  *(undefined4 *)((longlong)unaff_RDI + 4) = uStack_44;
  *(undefined4 *)(unaff_RDI + 1) = uStack_40;
  *(undefined4 *)((longlong)unaff_RDI + 0xc) = uStack_3c;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar4 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


