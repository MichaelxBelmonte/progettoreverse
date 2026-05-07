// Function: FUN_00941932
// Address: 00941932
// Size: 629 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "mergeSecretDataRecords bad params: numberOfRecords = %d, inFirstRecordIndex = %d, inSecondRecordInd...
//   "static void pace::AuthorizationVerifier::mergeSecretDataRecords(size_t, size_t, petpub::AuthStorage...


void FUN_00941932(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_2 + 0x50);
  uVar4 = (*(longlong *)(param_2 + 0x58) - lVar7 >> 3) * -0xf0f0f0f0f0f0f0f;
  if ((((uVar4 < 2) || (uVar4 < unaff_RDI || uVar4 - unaff_RDI == 0)) || (unaff_RDI == unaff_RSI))
     || (uVar4 < unaff_RSI || uVar4 - unaff_RSI == 0)) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00983230();
    FUN_00983230();
    FUN_00928ab0("static void pace::AuthorizationVerifier::mergeSecretDataRecords(size_t, size_t, petpub::AuthStorage &, int32_t)"
                 ,&DAT_000033f4);
    FUN_009bd14b();
    lVar7 = *(longlong *)(param_2 + 0x50);
  }
  FUN_0094709a(*(undefined8 *)(lVar7 + 0x30 + unaff_RSI * 0x88),
               *(undefined8 *)(lVar7 + 0x28 + unaff_RSI * 0x88));
  FUN_0094709a(*(undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x48 + unaff_RSI * 0x88),
               *(undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x40 + unaff_RSI * 0x88));
  lVar5 = *(longlong *)(param_2 + 0x50);
  lVar3 = unaff_RSI * 0x88;
  lVar6 = unaff_RDI * 0x88;
  piVar2 = (int *)(lVar5 + 0x5c + lVar6);
  *piVar2 = *piVar2 + *(int *)(lVar5 + 0x5c + lVar3);
  lVar7 = lVar5 + lVar3;
  if (((((*(int *)(lVar5 + 0x60 + lVar6) != *(int *)(lVar5 + 0x60 + lVar3)) ||
        (*(int *)(lVar5 + 100 + lVar6) != *(int *)(lVar5 + 100 + lVar3))) ||
       ((*(int *)(lVar5 + 0x58 + lVar6) != *(int *)(lVar5 + 0x58 + lVar3) ||
        ((*(char *)(lVar5 + 0x70 + lVar6) != *(char *)(lVar5 + 0x70 + lVar3) ||
         (*(char *)(lVar5 + 0x71 + lVar6) != *(char *)(lVar5 + 0x71 + lVar3))))))) ||
      (*(char *)(lVar5 + 0x72 + lVar6) != *(char *)(lVar5 + 0x72 + lVar3))) ||
     ((*(char *)(lVar5 + 0x73 + lVar6) != *(char *)(lVar5 + 0x73 + lVar3) ||
      (*(char *)(lVar5 + 0x74 + lVar6) != *(char *)(lVar5 + 0x74 + lVar3))))) {
    *(undefined4 *)(lVar5 + 0x58 + lVar6) = 5;
    *(undefined1 *)(lVar5 + 0x74 + lVar6) = 0;
  }
  lVar5 = lVar7 + 0x88;
  lVar3 = *(longlong *)(param_2 + 0x58);
  lVar6 = lVar7;
  if (lVar5 != lVar3) {
    do {
      lVar7 = lVar6 + 0x88;
      FUN_008ec820();
      lVar5 = lVar6 + 0x110;
      lVar6 = lVar7;
    } while (lVar5 != lVar3);
    lVar5 = *(longlong *)(param_2 + 0x58);
    if (lVar5 == lVar7) goto LAB_00941b94;
  }
  do {
    puVar1 = (undefined8 *)(lVar5 + -0x88);
    lVar5 = lVar5 + -0x88;
    (**(code **)*puVar1)();
  } while (lVar7 != lVar5);
LAB_00941b94:
  *(longlong *)(param_2 + 0x58) = lVar7;
  return;
}


