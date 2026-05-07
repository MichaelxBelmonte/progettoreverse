// Function: FUN_0093ee92
// Address: 0093ee92
// Size: 845 bytes
// Class: GNUni
// String references:
//   "storageId"
//   "counter1CurrentCount"
//   "counter1StartCount"
//   "counter2CurrentCount"
//   "counter2StartCount"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "Bad LsCountLimitPtr (0x%16X)"
//   "static petpub::CountLimitRecord pace::AuthorizationVerifier::convertCountLimitFromLicenseDbToPublic...
//   "flagsReadOnly"
//   "counters64bitCombined"
//   "counter1CountsUpNotDown"
//   "counter2CountsUpNotDown"


void FUN_0093ee92(char *param_1,undefined8 param_2,size_t param_3)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *in_stack_ffffffffffffffb0;
  code *local_48;
  
  *unaff_RDI = &DAT_0251c140;
  *(undefined4 *)(unaff_RDI + 1) = 0;
  unaff_RDI[2] = 0;
  unaff_RDI[3] = 0;
  unaff_RDI[4] = 0;
  *(undefined2 *)(unaff_RDI + 5) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x2c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x32) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x53) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x4c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x44) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x3c) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x57) = 1;
  *(undefined1 *)((longlong)unaff_RDI + 0x59) = 0;
  if (*unaff_RSI == 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_48 = FUN_00950352;
    FUN_00983230();
    param_1 = 
    "static petpub::CountLimitRecord pace::AuthorizationVerifier::convertCountLimitFromLicenseDbToPublic(const license_services::LsCountLimitPtr, bool, bool, int32_t)"
    ;
    FUN_00928ab0("static petpub::CountLimitRecord pace::AuthorizationVerifier::convertCountLimitFromLicenseDbToPublic(const license_services::LsCountLimitPtr, bool, bool, int32_t)"
                 ,&DAT_00002bed);
    FUN_009bd14b();
    in_stack_ffffffffffffffb0 = unaff_RSI;
  }
  FUN_00a3ef7e();
  pcVar5 = "storageId";
  FUN_009bafbc();
  lVar2 = FUN_00a3ef7e();
  *(undefined4 *)(unaff_RDI + 1) = *(undefined4 *)(lVar2 + 0x88);
  (**(code **)(*(longlong *)*unaff_RSI + 0x48))();
  std::string::string((string *)param_1,(string *)pcVar5);
  if (((ulonglong)in_stack_ffffffffffffffb0 & 1) == 0) {
    local_48 = (code *)((ulonglong)in_stack_ffffffffffffffb0 >> 1 & 0x7f);
  }
  FUN_00a3ef7e();
  FUN_009bafbc();
  lVar2 = FUN_00a3ef7e();
  uVar1 = *(uint *)(lVar2 + 0x4c);
  pcVar3 = (code *)(unaff_RDI[3] - unaff_RDI[2]);
  if (pcVar3 < local_48) {
    FUN_0088d550();
  }
  else if (local_48 < pcVar3) {
    unaff_RDI[3] = local_48 + unaff_RDI[2];
  }
  _memcpy(param_1,local_48,param_3);
  FUN_00a3ef7e();
  FUN_009bafbc();
  lVar2 = FUN_00a3ef7e();
  *(undefined1 *)((longlong)unaff_RDI + 0x29) = *(undefined1 *)(lVar2 + 0x30);
  FUN_00a3ef7e();
  FUN_009bafbc();
  lVar2 = FUN_00a3ef7e();
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = *(undefined4 *)(lVar2 + 0x34);
  FUN_00a3ef7e();
  FUN_009bafbc();
  lVar2 = FUN_00a3ef7e();
  *(undefined4 *)(unaff_RDI + 6) = *(undefined4 *)(lVar2 + 0x38);
  *(uint *)((longlong)unaff_RDI + 0x34) = 2 - (uVar1 & 1);
  FUN_00a3ef7e();
  FUN_009bafbc();
  lVar2 = FUN_00a3ef7e();
  *(undefined1 *)((longlong)unaff_RDI + 0x39) = *(undefined1 *)(lVar2 + 0x3c);
  FUN_00a3ef7e();
  FUN_009bafbc();
  lVar2 = FUN_00a3ef7e();
  puVar4 = (undefined4 *)((longlong)unaff_RDI + 0x3c);
  *puVar4 = *(undefined4 *)(lVar2 + 0x40);
  FUN_00a3ef7e();
  FUN_009bafbc();
  lVar2 = FUN_00a3ef7e();
  *(undefined4 *)(unaff_RDI + 8) = *(undefined4 *)(lVar2 + 0x44);
  *(uint *)((longlong)unaff_RDI + 0x44) = uVar1 & 2 ^ 3;
  FUN_00a3ef7e();
  FUN_009bafbc();
  lVar2 = FUN_00a3ef7e();
  *(undefined1 *)((longlong)unaff_RDI + 0x49) = *(undefined1 *)(lVar2 + 0x48);
  FUN_009436fa();
  if (((ulonglong)in_stack_ffffffffffffffb0 & 1) != 0) {
    operator_delete(puVar4);
  }
  return;
}


