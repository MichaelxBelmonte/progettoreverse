// Function: FUN_00928788
// Address: 00928788
// Size: 693 bytes
// Class: MUSpectrumShaper
// String references:
//   "The AuthorizationVerifier constructor was not provided a proper channel encyptor (ID = %d)"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "pace::AuthorizationVerifier::AuthorizationVerifier(uint32_t, pace::SharedEncryptor_T, bool)"


void FUN_00928788(ulong param_1,longlong *param_2,size_t param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  int unaff_ESI;
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_0251eb40;
  unaff_RDI[1] = 0;
  unaff_RDI[2] = 0;
  uVar7 = param_1;
  FUN_009b23e0();
  unaff_RDI[0xf] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0x11] = &DAT_0251a348;
  *(undefined4 *)(unaff_RDI + 0x12) = 0;
  ___bzero();
  unaff_RDI[0x26] = &DAT_0251c758;
  *(undefined1 *)(unaff_RDI + 0x27) = 0;
  unaff_RDI[0x28] = 0;
  unaff_RDI[0x29] = 0;
  unaff_RDI[0x2a] = 0;
  *(undefined2 *)(unaff_RDI + 0x2b) = 1;
  unaff_RDI[0x2c] = 0;
  unaff_RDI[0x2d] = 0;
  unaff_RDI[0x2e] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x177) = 0;
  *(undefined4 *)(unaff_RDI + 0x30) = 4;
  *(undefined8 *)((longlong)unaff_RDI + 0x184) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x18c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x191) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x199) = 1;
  FUN_009b4e10();
  FUN_009285ea();
  if ((unaff_ESI == 0) || (*param_2 == 0)) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    uVar7 = 0x1fc0bd8;
    FUN_00928ab0("pace::AuthorizationVerifier::AuthorizationVerifier(uint32_t, pace::SharedEncryptor_T, bool)"
                 ,0xde);
    FUN_009bd14b();
  }
  pvVar5 = operator_new(uVar7);
  FUN_0098cdbc();
  puVar6 = operator_new(uVar7);
  puVar6[2] = 0;
  puVar6[1] = 0;
  puVar8 = &DAT_0251fb00;
  *puVar6 = &DAT_0251fb00;
  puVar6[3] = pvVar5;
  unaff_RDI[0xe] = pvVar5;
  plVar3 = (longlong *)unaff_RDI[0xf];
  unaff_RDI[0xf] = puVar6;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar2 = *param_2;
  lVar4 = unaff_RDI[0xe];
  _memcpy(puVar8,section_000001f8.segname + 2,param_3);
  if (lVar4 != lVar2) {
    FUN_009ad770();
  }
  *(undefined2 *)(lVar4 + 0x238) = *(undefined2 *)(lVar2 + 0x238);
  *(undefined8 *)(lVar4 + 0x230) = *(undefined8 *)(lVar2 + 0x230);
  *(undefined1 *)(unaff_RDI + 0x10) = 1;
  *(int *)(unaff_RDI + 0xd) = unaff_ESI;
  unaff_RDI[0xb] = 0x200000000;
  *(undefined4 *)(unaff_RDI + 0xc) = *(undefined4 *)(unaff_RDI[0xe] + 8);
  *(undefined4 *)((longlong)unaff_RDI + 100) = 0;
  *(char *)(unaff_RDI + 0x38) = (char)param_1;
  FUN_0094d0ec();
  return;
}


