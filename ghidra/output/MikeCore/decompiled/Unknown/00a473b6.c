// Function: FUN_00a473b6
// Address: 00a473b6
// Size: 715 bytes
// Class: Unknown
// String references:
//   "Attempt to add this object to the entity metadata twice. The object has entityId: %d and instanceId...
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblice...
//   "void license_services::LsEntityUtilsAuthManifestElement::add(license_services::LsAuthManifestElemen...


void FUN_00a473b6(void)

{
  ulonglong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *pvVar5;
  void *pvVar6;
  longlong lVar7;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar8;
  ulonglong uVar9;
  
  lVar4 = FUN_00a4723c();
  if (lVar4 != -1) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00983230();
    FUN_00928ab0("void license_services::LsEntityUtilsAuthManifestElement::add(license_services::LsAuthManifestElementWire &)"
                 ,0x68);
    FUN_009c78cb();
  }
  FUN_009b4be0();
  lVar4 = *(longlong *)(unaff_RDI + 0x10);
  puVar3 = *(undefined8 **)(lVar4 + 0x18);
  if (puVar3 == *(undefined8 **)(lVar4 + 0x20)) {
    lVar7 = *(longlong *)(lVar4 + 0x10);
    pvVar6 = (void *)((longlong)puVar3 - lVar7);
    uVar1 = ((longlong)pvVar6 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = (longlong)*(undefined8 **)(lVar4 + 0x20) - lVar7;
    uVar9 = lVar8 >> 2;
    if (uVar9 < uVar1) {
      uVar9 = uVar1;
    }
    if (0xffffffffffffffe < (ulonglong)(lVar8 >> 3)) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00a47844();
      }
      pvVar5 = operator_new(0xffffffff);
    }
    pvVar2 = (void *)((longlong)pvVar5 + uVar9 * 8);
    lVar8 = (longlong)pvVar5 + ((longlong)pvVar6 >> 3) * 8 + 8;
    *(undefined8 *)(lVar8 + -8) = *(undefined8 *)(unaff_RSI + 0x18);
    if (0 < (longlong)pvVar6) {
      _memcpy(pvVar2,pvVar6,(size_t)lVar7);
    }
    *(void **)(lVar4 + 0x10) = pvVar5;
    *(longlong *)(lVar4 + 0x18) = lVar8;
    *(void **)(lVar4 + 0x20) = pvVar2;
    if (lVar7 != 0) {
      operator_delete(pvVar2);
    }
  }
  else {
    *puVar3 = *(undefined8 *)(unaff_RSI + 0x18);
    *(undefined8 **)(lVar4 + 0x18) = puVar3 + 1;
  }
  lVar4 = *(longlong *)(unaff_RDI + 0x10);
  lVar7 = *(longlong *)(lVar4 + 0x50);
  if (lVar7 == *(longlong *)(lVar4 + 0x58)) {
    lVar7 = (lVar7 - *(longlong *)(lVar4 + 0x48) >> 5) * 0x6db6db6db6db6db7;
    if (0x124924924924924 < lVar7 + 1U) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    FUN_00a47a50(lVar4 + 0x58,lVar7);
    FUN_00a6ba42();
    FUN_00a479c0();
    FUN_00a47ac0();
  }
  else {
    FUN_00a6ba42();
    *(longlong *)(lVar4 + 0x50) = lVar7 + 0xe0;
  }
  return;
}


